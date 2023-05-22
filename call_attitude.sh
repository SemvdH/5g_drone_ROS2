ros2 service call /drone/set_attitude drone_services/srv/SetAttitude "{pitch: $1, yaw: $2, roll: $3, thrust: $4}"
