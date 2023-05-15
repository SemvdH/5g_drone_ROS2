import rclpy
from rclpy.node import Node

from sshkeyboard import listen_keyboard_manual
import asyncio

from drone_services.srv import SetAttitude
from drone_services.srv import SetTrajectory
from drone_services.srv import SetVehicleControl
from drone_services.srv import ArmDrone


class TestController(Node):

    def __init__(self):
        super().__init__('test_controller')
        self.cli = self.create_client(SetAttitude, 'drone/set_attitude')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('set attitude service not available, waiting again...')
        self.get_logger().info('successfully connected to set attitude service')
        self.vehicle_control_cli = self.create_client(
            SetVehicleControl, '/drone/set_vehicle_control')
        while not self.vehicle_control_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('set vehicle control service not available, waiting again...')
        self.get_logger().info('successfully connected to set vehicle control service')
        self.traj_cli = self.create_client(SetTrajectory, '/drone/set_trajectory')
        while not self.traj_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('set trajectory service not available, waiting again...')
        self.get_logger().info('successfully connected to set trajectory service')
        self.arm_cli = self.create_client(ArmDrone, '/drone/arm')
        while not self.arm_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('arm service not available, waiting again...')
        self.get_logger().info('successfully connected to arm service')

        self.get_logger().info('all services available')
        self.control_mode = 1
        
        self.attitude_req = SetAttitude.Request()
        self.vehicle_control_req = SetVehicleControl.Request()
        self.traj_req = SetTrajectory.Request()
        self.arm_req = ArmDrone.Request()

        self.get_logger().info("\nControls:\n1 - Attitude control\n2 - Velocity control\n3 - Position control\n/ - Arm drone\nW - forward\nS - backward\nA - left\nD - right\nQ - rotate left\nE - rotate right\nSpace - up\nZ - down\nV - Down nudge\nF - Up nudge\nN - emergency stop\nEsc - exit")

    def spin(self):
        while rclpy.ok():
            asyncio.run(listen_keyboard_manual(on_press=self.on_press))
            rclpy.spin_once(self, timeout_sec=0.1)

    def send_arm(self):
        self.future = self.arm_cli.call_async(self.arm_req)
        rclpy.spin_until_future_complete(self, self.future)
        self.get_logger().info('publishing message arm msg on service')
        return self.future.result()
    
    def send_control_mode(self):
        self.vehicle_control_req.control = self.control_mode
        self.future = self.vehicle_control_cli.call_async(self.vehicle_control_req)
        rclpy.spin_until_future_complete(self, self.future)
        self.get_logger().info('publishing message vehicle control msg on service')
        return self.future.result()

    def send_attitude_request(self, yaw, pitch, roll, thrust):
        self.attitude_req.yaw = yaw
        self.attitude_req.pitch = pitch
        self.attitude_req.roll = roll
        self.attitude_req.thrust = thrust
        self.get_logger().info('set request to %f %f %f %f' % (yaw, pitch, roll, thrust))
        self.future = self.cli.call_async(self.attitude_req)
        rclpy.spin_until_future_complete(self, self.future)
        self.get_logger().info('publishing message on service')
        return self.future.result()

    def send_velocity_request(self, x, y, z, angle):
        self.traj_req.control_mode = 2
        self.traj_req.yaw = angle
        self.traj_req.values = [x, y, z]
        self.get_logger().info('set request to %f %f %f %f' % (x, y, z, angle))
        self.future = self.traj_cli.call_async(self.traj_req)
        rclpy.spin_until_future_complete(self, self.future)
        self.get_logger().info('publishing message on service')
        return self.future.result()

    def send_position_request(self, x, y, z, angle):
        self.traj_req.control_mode = 3
        self.traj_req.yaw = angle
        self.traj_req.values = [x, y, z]
        self.get_logger().info('set request to %f %f %f %f' % (x, y, z, angle))
        self.future = self.traj_cli.call_async(self.traj_req)
        rclpy.spin_until_future_complete(self, self.future)
        self.get_logger().info('publishing message on service')
        return self.future.result()

    def on_release(self, key):
        # self.get_logger().info('released ' + str(key))
        pass

    def move_up(self):
        pass
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=0.0,
                                       roll=0.0, thrust=0.05)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=0.0, z=1.0, angle=0.0)
        else:
            self.send_position_request(x=0.0, y=0.0, z=1.0, angle=0.0)

    def move_right(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=0.0,
                                       roll=1.0, thrust=0.0)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=1.0, y=0.0, z=0.0, angle=0.0)
        else:
            self.send_position_request(x=1.0, y=0.0, z=0.0, angle=0.0)

    def move_down(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=0.0,
                                       roll=0.0, thrust=-0.05)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=0.0, z=-1.0, angle=0.0)
        else:
            self.send_position_request(x=0.0, y=0.0, z=-1.0, angle=0.0)

    def move_left(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=0.0,
                                       roll=-1.0, thrust=0.0)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=-1.0, y=0.0, z=0.0, angle=0.0)
        else:
            self.send_position_request(x=-1.0, y=0.0, z=0.0, angle=0.0)

    def rotate_right(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=1.0,
                                       roll=0.0, thrust=0.0)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=0.0, z=0.0, angle=1.0)
        else:
            self.send_position_request(x=0.0, y=0.0, z=0.0, angle=1.0)

    def rotate_left(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=-1.0,
                                       roll=0.0, thrust=0.0)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=0.0, z=0.0, angle=-1.0)
        else:
            self.send_position_request(x=0.0, y=0.0, z=0.0, angle=-1.0)

    def move_forward(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=-1.0, yaw=0.0,
                                       roll=0.0, thrust=0.0)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=1.0, z=0.0, angle=0.0)
        else:
            self.send_position_request(x=0.0, y=1.0, z=0.0, angle=0.0)

    def move_backward(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=1.0, yaw=0.0,
                                       roll=0.0, thrust=0.0)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=-1.0, z=0.0, angle=0.0)
        else:
            self.send_position_request(x=0.0, y=-1.0, z=0.0, angle=0.0)

    def stop(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=0.0,
                                       roll=0.0, thrust=0.0)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=0.0, z=0.0, angle=0.0)
        else:
            self.send_position_request(x=0.0, y=0.0, z=0.0, angle=0.0)

    def move_up_little(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=0.0,
                                       roll=0.0, thrust=0.01)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=0.0, z=0.5, angle=0.0)
        else:
            self.send_position_request(x=0.0, y=0.0, z=1.0, angle=0.0)

    def move_down_little(self):
        if (self.control_mode == 1):
            self.send_attitude_request(pitch=0.0, yaw=0.0,
                                       roll=0.0, thrust=-0.01)
        elif (self.control_mode == 2):
            self.send_velocity_request(x=0.0, y=0.0, z=-0.5, angle=0.0)
        else:
            self.send_position_request(x=0.0, y=0.0, z=-1.0, angle=0.0)

    def on_press(self, key):
        try:
            # self.get_logger().info('pressed ' + char)
            if key == 'w':
                self.get_logger().info('forward')
                self.move_forward()
            if key == 's':
                self.get_logger().info('backward')
                self.move_backward()
            if key == 'a':
                self.get_logger().info('left')
                self.move_left()
            if key == 'd':
                self.get_logger().info('right')
                self.move_right()
            if key == 'q':
                self.get_logger().info('rotate left')
                self.rotate_left()
            if key == 'e':
                self.get_logger().info('rotate right')
                self.rotate_right()
            if key == 'z':
                self.get_logger().info('down')
                self.move_down()
            if key == 'space':
                self.get_logger().info('up')
                self.move_up()
            if key == 'v':
                self.get_logger().info('down a little')
                self.move_down_little()
            if key == 'f':
                self.get_logger().info('up a little')
                self.move_up_little()
            if key == 'n':
                self.get_logger().info('stop')
                self.stop()
            if key == '1':
                self.get_logger().info('attitude control')
                self.control_mode = 4
                self.send_control_mode()
            if key == '2':
                self.get_logger().info('velocity control')
                self.control_mode = 16
                self.send_control_mode()
            if key == '3':
                self.get_logger().info('position control')
                self.control_mode = 32
                self.send_control_mode()
            if key == '/':
                self.get_logger().info('arming')
                self.send_arm()

        except Exception as e:
            self.get_logger().error(str(e))
            raise e


def main(args=None):
    rclpy.init(args=args)

    test_controller = TestController()

    test_controller.spin()

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    test_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
