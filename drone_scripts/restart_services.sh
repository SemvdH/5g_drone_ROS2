echo "waiting 5 secs before restarting..."
sleep 5
echo "restarting"

sudo systemctl restart drone_api.service
sudo systemctl restart drone_camera.service
sudo systemctl restart drone_failsafe.service
sudo systemctl restart drone_find_usb_devices.service
sudo systemctl restart drone_height_sensor.service
sudo systemctl restart drone_lidar.service
sudo systemctl restart drone_positionchanger.service
sudo systemctl restart drone_px4_connection.service
sudo systemctl restart drone_relais.service
sudo systemctl restart drone_status.service
