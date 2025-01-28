#!/bin/bash

nmcli connection modify "Wired connection 1" ipv4.dns "8.8.8.8"
nmcli connection down "Wired connection 1"
nmcli connection up "Wired connection 1"
ping google.com -c 1
rm dns.sh
ls | grep "dns.sh"