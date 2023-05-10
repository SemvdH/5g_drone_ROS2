import rclpy
from rclpy.node import Node

from sshkeyboard import listen_keyboard_manual
import asyncio

from drone_services.srv import SetAttitude


class TestController(Node):

    def __init__(self):
        super().__init__('test_controller')
        self.cli = self.create_client(SetAttitude, 'drone/set_attitude')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetAttitude.Request()

        self.get_logger().info("Controls:\nW - forward\nS - backward\nA - left\nD - right\nQ - rotate left\nE - rotate right\nSpace - up\nZ - down\nV - Down nudge\nF - Up nudge\nN - emergency stop\nEsc - exit")

    def spin(self):
        while rclpy.ok():
            asyncio.run(listen_keyboard_manual(on_press=self.on_press))
            rclpy.spin_once(self, timeout_sec=0.1)

    def send_request(self, yaw, pitch, roll, thrust):
        self.req.yaw = yaw
        self.req.pitch = pitch
        self.req.roll = roll
        self.req.thrust = thrust
        self.get_logger().info('set request to %f %f %f %f' % (yaw, pitch, roll, thrust))
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        self.get_logger().info('publishing message on service')
        return self.future.result()

    def on_release(self, key):
        # self.get_logger().info('released ' + str(key))
        pass

    def on_press(self, key):
        try:
            # self.get_logger().info('pressed ' + char)
            if key == 'w':
                self.get_logger().info('forward')
                self.send_request(pitch=-1.0, yaw=0.0,
                                  roll=0.0, thrust=0.0)
            if key == 's':
                self.get_logger().info('backward')
                self.send_request(pitch=1.0, yaw=0.0,
                                  roll=0.0, thrust=0.0)
            if key == 'a':
                self.get_logger().info('left')
                self.send_request(pitch=0.0, yaw=0.0,
                                  roll=-1.0, thrust=0.0)
            if key == 'd':
                self.get_logger().info('right')
                self.send_request(pitch=0.0, yaw=0.0,
                                  roll=1.0, thrust=0.0)
            if key == 'q':
                self.get_logger().info('rotate left')
                self.send_request(pitch=0.0, yaw=-1.0,
                                  roll=0.0, thrust=0.0)
            if key == 'e':
                self.get_logger().info('rotate right')
                self.send_request(pitch=0.0, yaw=1.0,
                                  roll=0.0, thrust=0.0)
            if key == 'z':
                self.get_logger().info('down')
                self.send_request(pitch=0.0, yaw=0.0,
                                  roll=0.0, thrust=-0.05)
            if key == 'space':
                self.get_logger().info('up')
                self.send_request(pitch=0.0, yaw=0.0,
                                  roll=0.0, thrust=0.05)
            if key == 'v':
                self.get_logger().info('down a little')
                self.send_request(pitch=0.0, yaw=0.0,
                                  roll=0.0, thrust=-0.01)
            if key == 'f':
                self.get_logger().info('up a little')
                self.send_request(pitch=0.0, yaw=0.0,
                                  roll=0.0, thrust=0.01)
            if key == 'n':
                self.get_logger().info('stop')
                self.send_request(pitch=0.0, yaw=0.0,
                                  roll=0.0, thrust=0.0)
            
            # else:
            #     try:
            #         # known keys like spacebar, ctrl
            #         name = key.name
            #         vk = key.value.vk
            #     except AttributeError:
            #         # unknown keys like headphones skip song button
            #         name = 'UNKNOWN'
            #         vk = key.vk
            #     # self.get_logger().info('pressed {} ({})'.format(name, vk))
            #     if vk == 32:
            #         self.get_logger().info('up')
            #         self.send_request(pitch=0.0, yaw=0.0, roll=0.0, thrust=0.05)
            #     if vk == 65505:
            #         self.get_logger().info('down')
            #         self.send_request(pitch=0.0, yaw=0.0,
            #                           roll=0.0, thrust=-0.05)

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
