#!/bin/bash

if [[ $EUID -ne 0 ]]; then
  echo '[!] This script needs to be run as root.'
  exit 1
fi

echo "[*] Checking package manager"

if command -v apt >/dev/null 2>&1; then
  echo "[+] Debian-based system detected"

  echo "[*] Purging insecure services"
  apt purge -y \
    xinetd telnetd telnet rsh-client nis tftpd-hpa tftp \
    vsftpd dovecot-core squid snmpd postfix bind9 \
    anacron || true

  systemctl disable --now xinetd || true
  systemctl disable --now telnet.socket || true
  systemctl disable --now rsh.socket rlogin.socket || true
  systemctl disable --now tftp.socket || true
  systemctl disable --now vsftpd dovecot squid snmpd postfix || true
  echo "[✓] Insecure services removed"

  # ClamAV
  if ! command -v clamscan >/dev/null 2>&1; then
      apt install -y clamav
  fi
  echo "[✓] ClamAV installed, updating signatures now"
  freshclam

elif command -v dnf >/dev/null 2>&1 || command -v yum >/dev/null 2>&1; then
  if command -v dnf >/dev/null 2>&1; then
    PM=dnf
  else
    PM=yum
  fi

  echo "[+] RHEL-based system detected ($PM)"

  echo "[*] Purging insecure services"
  $PM remove -y \
    xinetd telnet-server telnet rsh-server ypbind ypserv \
    tftp-server vsftpd dovecot squid net-snmp net-snmp-utils net-snmp-libs \
    postfix bind bind-utils cronie || true

  systemctl disable --now xinetd || true
  systemctl disable --now telnet.socket || true
  systemctl disable --now rsh.socket rlogin.socket || true
  systemctl disable --now tftp.socket || true
  systemctl disable --now vsftpd dovecot squid snmpd postfix || true
  systemctl disable --now sshd || true
  echo "[✓] Insecure services removed"
    
  if ! command -v clamscan >/dev/null 2>&1; then
    $PM install -y clamav
  fi
  echo "[✓] ClamAV installed, updating signatures now"
  freshclam

else
  echo "[!] No supported package manager found"
fi

URL="https://raw.githubusercontent.com/Slavetomints/langs-practice-learning/refs/heads/main/bash/anti-persistence.sh"
DEST="anti-persistence.sh"

echo "[*] Downloading $URL"

if command -v curl >/dev/null 2>&1; then
  curl -fsSL "$URL" -o "$DEST"
elif command -v wget >/dev/null 2>&1; then
  wget -q "$URL" -O "$DEST"
else
  echo "[!] ERROR: Neither curl nor wget found!"
  exit 1
fi

chmod +x "$DEST"
echo "[*] Running downloaded script..."
"$DEST"


# Running iptables last so the rest of the script has no errors
echo "[*] Setting iptables configurations"

# Flush rules
iptables -F
iptables -X

# Default drop
iptables -P INPUT DROP
iptables -P FORWARD DROP
iptables -P OUTPUT DROP

# Established
iptables -A INPUT  -m state --state ESTABLISHED,RELATED -j ACCEPT
iptables -A OUTPUT -m state --state ESTABLISHED,RELATED -j ACCEPT

# Loopback
iptables -A INPUT  -i lo -j ACCEPT
iptables -A OUTPUT -o lo -j ACCEPT

# ICMP
iptables -A INPUT  -p icmp -j ACCEPT
iptables -A OUTPUT -p icmp -j ACCEPT

# DNS
iptables -A OUTPUT -p udp --dport 53 -j ACCEPT
iptables -A OUTPUT -p tcp --dport 53 -j ACCEPT
iptables -A INPUT  -p udp --sport 53 -j ACCEPT
iptables -A INPUT  -p tcp --sport 53 -j ACCEPT

# HTTP/S
iptables -A OUTPUT -p tcp --dport 80  -j ACCEPT
iptables -A OUTPUT -p tcp --dport 443 -j ACCEPT

# NTP
iptables -A OUTPUT -p udp --dport 123 -j ACCEPT

# Splunk
iptables -A OUTPUT -p tcp --dport 8000 -j ACCEPT
iptables -A OUTPUT -p tcp --dport 8089 -j ACCEPT
iptables -A OUTPUT -p tcp --dport 9997 -j ACCEPT
echo "[✓] iptables configured"
echo "[✓] Cleanup finished successfully."
