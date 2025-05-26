#!/bin/bash

# Updates system packages
apt update

# Sets the DNS information and pings google to confirm
nmcli connection modify "Wired connection 1" ipv4.dns "8.8.8.8"
nmcli connection down "Wired connection 1"
nmcli connection up "Wired connection 1"
ping google.com -c 1

# installs the proxmox guest agent
apt install qemu-guest-agent

# removes the file
rm proxmox.sh
ls | grep "proxmox.sh"