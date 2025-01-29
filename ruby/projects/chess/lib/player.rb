module Chess
  class Player
    attr_reader :name
    def initialize(color)
      @color = color

      puts "What is #{@color} player's name?"
      @name = gets.chomp("What is your name")
    end
  end
end
