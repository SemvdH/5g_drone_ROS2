#!/bin/bash

. /home/ubuntu/source_ros2.sh

SERIAL=$(cat /home/ubuntu/drone_conf/lidar.conf)
echo "serial port is "$SERIAL
echo ros2 run object_detection lidar_reader --ros-args -p lidar_serial_port:=/dev/${SERIAL}
ros2 run object_detection lidar_reader --ros-args -p lidar_serial_port:=/dev/${SERIAL} | tee /home/ubuntu/drone_log/lidar.log


