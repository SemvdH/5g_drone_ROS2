import rclpy
from rclpy.node import Node
from rclpy.qos.QoSPresetProfiles import qos_profile_sensor_data

from drone_services.msg import DroneStatus
from drone_services.msg import DroneControlMode
from drone_services.msg import DroneArmStatus
from drone_services.msg import DroneRouteStatus
from px4_msgs.msg import BatteryStatus
from px4_msgs.msg import Cpuload

CONTROL_MODE_ATTITUDE = 1
CONTROL_MODE_VELOCITY = 2
CONTROL_MODE_POSITION = 3


class DroneStatusNode(Node):
    def __init__(self):
        super().__init__('drone_status')
        # publish to drone/status topic
        self.publisher = self.create_publisher(
            DroneStatus, '/drone/status', 10)
        self.control_mode_subscriber = self.create_subscription(
            DroneControlMode, '/drone/control_mode', self.control_mode_callback, 10)
        self.arm_status_subscriber = self.create_subscription(
            DroneArmStatus, '/drone/arm_status', self.arm_status_callback, 10)
        self.route_status_subscriber = self.create_subscription(
            DroneRouteStatus, '/drone/route_status', self.route_status_callback, 10)
        self.battery_status_subscriber = self.create_subscription(
            BatteryStatus, '/fmu/out/battery_status', self.battery_status_callback,qos_profile=qos_profile_sensor_data)
        self.cpu_load_subscriber = self.create_subscription(
            Cpuload, '/fmu/out/cpuload', self.cpu_load_callback,qos_profile=qos_profile_sensor_data)
        # publish every 0.5 seconds
        self.timer = self.create_timer(0.5, self.publish_status)
        self.armed = False
        self.control_mode = "attitude"
        self.battery_percentage = 100.0
        self.cpu_usage = 0.0
        self.route_setpoint = 0

    def publish_status(self):
        msg = DroneStatus()
        msg.armed = self.armed
        msg.control_mode = self.control_mode
        msg.battery_percentage = self.battery_percentage
        msg.cpu_usage = self.cpu_usage
        msg.route_setpoint = self.route_setpoint
        self.publisher.publish(msg)
        self.get_logger().info('Publishing status message')

    def control_mode_callback(self, msg):
        if msg.control_mode == CONTROL_MODE_ATTITUDE:
            self.control_mode = "attitude"
        elif msg.control_mode == CONTROL_MODE_VELOCITY:
            self.control_mode = "velocity"
        elif msg.control_mode == CONTROL_MODE_POSITION:
            self.control_mode = "position"
        else:
            self.control_mode = "unknown"

    def arm_status_callback(self, msg):
        self.armed = msg.armed

    def route_status_callback(self, msg):
        self.route_setpoint = msg.current_setpoint_index

    def battery_status_callback(self, msg):
        self.battery_percentage = msg.remaining * 100.0

    def cpu_load_callback(self, msg):
        self.cpu_usage = msg.load


def main(args=None):
    rclpy.init(args=args)

    drone_status = DroneStatusNode()

    rclpy.spin(drone_status)

    drone_status.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
