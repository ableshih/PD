
https://github.com/AdguardTeam/AdGuardHome/wiki/Raspberry-Pi

https://wayne65.ap.ngrok.io/wp/%E5%9C%A8raspberry-pi-%E6%9E%B6%E8%A8%ADadguard-home%E6%93%8B%E5%BB%A3%E5%91%8Adns%E7%A5%9E%E5%99%A8/

Raspberry Pi 

Raspbian Buster with desktop

in pi
-------------
# enable ssh
sudo systemctl enable ssh

sudo systemctl start ssh

# get ip
hostname -I|xargs -n1


in PuTTY 
-------------------
ip

pi

123

Installing AdGuard
========
open 終端機

pi@raspberrypi:~ $

下載
wget https://static.adguard.com/adguardhome/release/AdGuardHome_linux_arm.tar.gz

解壓
tar xvf AdGuardHome_linux_arm.tar.gz



pi@raspberrypi:~ $ hostname -I|xargs -n1
10.35.145.1
pi@raspberrypi:~ $ wget https://static.adguard.com/adguardhome/release/AdGuardHome_linux_arm.tar.gz



pi@raspberrypi:~ $ tar xvf AdGuardHome_linux_arm.tar.gz
AdGuardHome/
AdGuardHome/AdGuardHome
AdGuardHome/README.md
AdGuardHome/LICENSE.txt





pi@raspberrypi:~ $ cd AdGuardHome/
pi@raspberrypi:~/AdGuardHome $ sudo ./AdGuardHome -s install




pi@raspberrypi:~/AdGuardHome $ sudo ./AdGuardHome -s start
2020/03/25 16:04:53 [info] Service control action: start
2020/03/25 16:04:53 [info] Action start has been done successfully on linux-systemd



in 控制電腦
開 chrome

10.35.145.1:3000


sudo ./AdGuardHome -s stop




























