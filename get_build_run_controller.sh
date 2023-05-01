#!/bin/bash
echo "updating git..."
./fgit.sh
echo "building package..."
colcon build --packages-select px4_connection
echo "launching controller..."
ros2 run px4_connection px4_controller
