# frozen_string_literal: true

require 'base64'
require 'colorize'
require 'fileutils'
require 'openssl'
require 'tty-prompt'
require 'yaml'

def main
  show_title
  main_menu
end

def show_title
  title = <<-'TITLE'
  ____        _
  |  _ \ _   _| |__  _   _
  | |_) | | | | '_ \| | | |
  |  _ <| |_| | |_) | |_| |
  |_|_\_\\__,_|_.__/ \__, |                 _
  |  _ \ __ _ ___ ___|___/   _____  _ __ __| |
  | |_) / _` / __/ __\ \ /\ / / _ \| '__/ _` |
  |  __/ (_| \__ \__ \\ V  V / (_) | | | (_| |
  |_|  _\__,_|___/___/ \_/\_/ \___/|_|  \__,_|
  |  \/  | __ _ _ __   __ _  __ _  ___ _ __
  | |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '__|
  | |  | | (_| | | | | (_| | (_| |  __/ |
  |_|  |_|\__,_|_| |_|\__,_|\__, |\___|_|
                            |___/
  TITLE
  puts title
end

def main_menu
  prompt = TTY::Prompt.new

  options = [
    { name: 'Add new password', value: -> { add_password } },
    { name: 'Get password', value: -> { recover_password } },
    { name: 'Exit', value: lambda {
      puts 'Goodbye!'
      sleep(5)
      system('clear')
    } }
  ]
  prompt.select('Please make a decision', options, cycle: true)
end

def add_password
  password_file = YAML.safe_load(File.read(find_password_file))
  prompt = TTY::Prompt.new
  place = prompt.ask('What is the name of the website/application?', required: true, echo: true)
  password_info = encrypt_password(prompt.mask('Please enter the password', required: true))
  data = {
    'place' => place,
    'password_info' => password_info
  }
  password_file['passwords'] << data

  File.write("password_files/#{@username}.yaml", password_file.to_yaml)
end

def recover_password
  password_file = YAML.safe_load(File.read(find_password_file))
  prompt = TTY::Prompt.new
  place = prompt.ask('What is the name of the website/application?', required: true, echo: true)

  entry = password_file['passwords'].find { |p| p['place'] == place }

  if entry
    password_info = entry['password_info']
    puts "Place: #{place}, Decrypted Password: #{decrypt_password(password_info)}"
  else
    puts 'Place not found'
  end
end

def find_password_file
  puts 'Please enter your username'
  username = gets.chomp.downcase
  @username = username
  if File.exist?("password_files/#{username}.yaml")
    authenticate("password_files/#{username}.yaml")
    "password_files/#{username}.yaml"
  else
    make_new_file(username)
  end
end

def authenticate(file)
  prompt = TTY::Prompt.new
  password_file = YAML.safe_load(File.read(file))
  if decrypt_password(password_file['password_info']) == prompt.mask('Please enter your password', required: true)
    puts 'Authenticated'.colorize(:green)
  else
    puts 'Denied'.colorize(:green)
    sleep(1)
    system('clear')
    exit
  end
end

def make_new_file(username)
  FileUtils.mkdir('password_files') unless File.directory?('password_files')

  prompt = TTY::Prompt.new

  password_info = encrypt_password(prompt.mask('Please make a password', required: true))
  File.open("password_files/#{username}.yaml", 'w') do |file|
    data = {
      'username' => username.to_s,
      'password_info' => password_info,
      'passwords' => []
    }
    file.write(YAML.dump(data))
  end
  "password_files/#{username}.yaml"
end

def encrypt_password(password, key = nil)
  cipher = OpenSSL::Cipher.new('aes-256-gcm')
  cipher.encrypt

  key ||= cipher.random_key

  iv = cipher.random_iv

  cipher.key = key
  cipher.iv = iv
  encrypted = cipher.update(password) + cipher.final

  auth_tag = cipher.auth_tag

  {
    'encrypted_password' => Base64.strict_encode64(encrypted),
    'iv' => Base64.strict_encode64(iv),
    'auth_tag' => Base64.strict_encode64(auth_tag),
    'key' => Base64.strict_encode64(key)
  }
end

def decrypt_password(encrypted_data)
  cipher = OpenSSL::Cipher.new('aes-256-gcm')
  cipher.decrypt

  encrypted_password = Base64.strict_decode64(encrypted_data['encrypted_password'])
  iv = Base64.strict_decode64(encrypted_data['iv'])
  auth_tag = Base64.strict_decode64(encrypted_data['auth_tag'])
  key = Base64.strict_decode64(encrypted_data['key'])

  cipher.key = key
  cipher.iv = iv
  cipher.auth_tag = auth_tag

  cipher.update(encrypted_password) + cipher.final
end

main
