#!/bin/bash
. /home/ubuntu/source_ros2.sh # source ros2 installation
SERIAL=$(cat /home/ubuntu/drone_conf/height.conf)
echo "serial port is "$SERIAL
ros2 run height height_reader --ros-args -p height_serial_port:=/dev/${SERIAL} | tee /home/ubuntu/drone_log/height.log


