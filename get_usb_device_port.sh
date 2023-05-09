/bin/udevadm info --name=/dev/ttyACM0 | grep SERIAL_SHORT | cut -d = -f 2
