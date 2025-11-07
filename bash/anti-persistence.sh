REPORT_FILE="$(pwd)/report.md"


check_cron() {
  echo "[+] Checking cron..."
  mapfile -t cron_array < <(crontab -l 2>/dev/null)

  if ((${#cron_array[@]} == 0)); then echo "[!] the crontab is empty"; fi
  
  BAD_JOBS=()  
  
  for line in "${cron_array[@]}"; do
    
    [[ -z "$line" || "$line" == \#* ]] && continue
    echo "[?] Is this a malicious cronjob?: $line"
    echo -n "> "
    read invalid_cron

    if [[ "$invalid_cron" == "Y" || "$invalid_cron" == "y" ]]; then
      echo -n "[+] "
      crontab -l 2>/dev/null | grep -Fxv "$line" | crontab -
      echo "[+] Removed: $line"
      BAD_JOBS+=("$line")
    fi
  done
  
  if ((${#BAD_JOBS[@]} > 0)); then
    echo "[!] At $(date) the following cronjobs were removed:" | tee -a "$REPORT_FILE"
    printf ' - %s\n' "${BAD_JOBS[@]}" | tee -a "$REPORT_FILE"
  else
    echo "[✓] No malicious cronjobs found."
  fi
}


check_services() {
  mapfile -t lines < <(systemctl show -p Id,Description --value --type=service | sed '/^$/d')
  services=()
  descriptions=()

  for ((i = 0; i < ${#lines[@]}; i+=2)); do
    services+=("${lines[i]}")
    descriptions+=("${lines[i+1]}")
  done

  BAD_SERVICES=()

  for i in "${!services[@]}"; do
    echo "[?] Is this a malicious service?: ${services[i]} - ${descriptions[i]}"
    echo -n "> "
    read invalid_service

    if [[ "$invalid_service" == "Y" || "$invalid_service" == "y" ]]; then
      service="${services[i]}"
      echo "[+] Stopping and disabling $service..."
      BAD_SERVICES+=("$service")
      systemctl stop "$service"
      systemctl disable "$service"
      if [[ -f "/etc/systemd/system/$service" ]]; then
        if [[ $EUID -eq 0 ]]; then
          rm "/etc/systemd/system/$service"
          echo "[+] Removed file: /etc/systemd/system/$service" | tee -a "$REPORT_FILE"          
        else
          sudo rm "/etc/systemd/system/$service"
          echo "[+] Removed file: /etc/systemd/system/$service" | tee -a "$REPORT_FILE"
        fi 
      else
        echo "[!] Couldn't find the service file, you'll have to  find and delete it."
      fi
    fi
  done

  if ((${#BAD_SERVICES[@]} > 0 )); then
    echo "[!] At $(date) the following services were removed:" | tee -a "$REPORT_FILE"
    printf ' - %s\n' "${BAD_SERVICES[@]}" | tee -a "$REPORT_FILE"
  else
    echo "[✓] No malicious services found"
  fi
}


function check_shells() {
  risky_snippets=(exec passthru shell_exec system proc_open popen pcntl_exec eval)
  echo "[+] Scanning the /var/www/html/ directory for PHP shells"

  echo "[!] At $(date) the following files were scanned:" | tee -a "$REPORT_FILE"
  find /var/www/html -type f | while IFS= read -r file; do
    found_snippets=()
    score=0 
    for word in "${risky_snippets[@]}"; do
      if grep -I -q "$word" "$file"; then
        ((score++))
        found_snippets+=("$word")
      fi
    done
    echo "[+] $file has a risk score of $score / 8" | tee -a "$REPORT_FILE"  
    if (( ${#found_snippets[@]} > 0 )); then
      echo "[+] The following snippets were found:" | tee -a "$REPORT_FILE"
      printf ' - %s\n' "${found_snippets[@]}" | tee -a "$REPORT_FILE"
    fi
    if (( score > 3 )); then
      echo -e "\nFILE CONTENTS:" >> "$REPORT_FILE"
      echo "-----------------------------------------------------------" >> "$REPORT_FILE"
      cat $file >> "$REPORT_FILE"
      echo "[!] $file has a risk score of above three, would you like to delete it? (y/n)"
      echo -n "> "
      read input < /dev/tty
      if [[ "$input" == "Y" || "$input" == "y" ]]; then 
        if [[ $EUID -eq 0 ]]; then
          rm "$file"
          echo -e "[+] Removed file $file \n\n" | tee -a "$REPORT_FILE"          
        else
          sudo rm "$file"
          echo -e "[+] Removed file $file \n\n" | tee -a "$REPORT_FILE"
        fi     
      fi   
    fi
  done
}

function title() {
  cat <<'EOF'

  /============================================================\
  ||     ____                 _      __                       ||
  ||    / __ \___  __________(_)____/ /____  ____  ________   ||
  ||   / /_/ / _ \/ ___/ ___/ / ___/ __/ _ \/ __ \/ ___/ _ \  ||
  ||  / ____/  __/ /  (__  ) (__  ) /_/  __/ / / / /__/  __/  ||
  || /_/ ___\___/_/  /____/_/____/\__/\___/_/ /_/\___/\___/   ||
  ||    / __ \__  ___________ ____  _____                     ||
  ||   / /_/ / / / / ___/ __ \`/ _ \/ ___/                    ||
  ||  / ____/ /_/ / /  / /_/ /  __/ /                         ||
  || /_/    \__,_/_/   \__, /\___/_/                          ||
  ||                  /____/                                  ||
  \============================================================/

EOF
}

function menu() {
  echo "  1 - Check for Cron Jobs"
  echo "  2 - Check for Services"
  echo "  3 - Check for PHP Shells"
  echo "  4 - Check All"
  echo "  99 - Exit"
}

function main() {
  title
  menu
  echo -e "\n\n\n============================================================" >> "$REPORT_FILE"
  echo "Report at $(date)" >> "$REPORT_FILE"
  echo "============================================================" >> "$REPORT_FILE"
  echo  "Please enter your selection"
  echo -n "> "
  read user_input

  case "$user_input" in
    1)
      clear
      title
      check_cron
      ;;
    2)
      clear
      title
      check_services
      ;;
    3)
      clear
      title
      check_shells
      ;;
    4)
      clear
      title
      check_cron
      clear
      title
      check_services
      clear
      title
      check_shells
      ;;
    99)
      return 0
      ;;
  *)
    echo "Invalid option"
    ;;
  esac
}

main