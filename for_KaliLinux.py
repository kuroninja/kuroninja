#Network tools
ping -c 5 192.168.1.254
ifconfig
arp -a
netstat -ano
route
easy_install shodan
shodan init b4uBmcuGXrBFUmuYWudTXsAe8edIB6t8
sudo apt-get install *gedit*
apt update
apt upgrade
apt install git
apt install ftp
cd /opt/impacket
service apache2 start
service ssh start
service postgresql start
sudo systemctl enable postgresql
sudo systemctl enable ssh

#!/bin/bash

for ip in seq 1 254`; do
ping -c 1 $1.$ip | grep "64 bytes" | cut -d " " -f 4 | tr -d ":" &
done

./ipsweep.sh 
