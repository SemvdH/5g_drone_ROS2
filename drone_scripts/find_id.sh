#!/bin/bash

lidarserial=00000000001A
heightserial=369A378F3439

find_by_id(){
    v=${1%:*}; p=${1#*:}  # split vid:pid into 2 vars
    v=${v#${v%%[!0]*}}; p=${p#${p%%[!0]*}}  # strip leading zeros
    grep -il "^PRODUCT=$v/$p" /sys/bus/usb/devices/*:*/uevent |
    sed s,uevent,, |
    xargs -r grep -r '^DEVNAME=' --include uevent
}
ids=$(find_by_id 0483:5740)
echo $ids

for device in $ids
do
	id=$(echo $device | cut -d "=" -f 2)
	serial=$(/bin/udevadm info --name=/dev/$id | grep SERIAL_SHORT | cut -d = -f 2)
	echo "device "$id" has serial number "$serial
	if [ $serial = $lidarserial ]
	then
		echo "LIDAR on port" $id
		echo $id > /home/ubuntu/drone_conf/lidar.conf
	elif [ $serial = $heightserial ]
	then
		echo "height sensor on port" $id
		echo $id > /home/ubuntu/drone_conf/height.conf
	else
		echo "unknown serial number" $serial
	fi
done
