import rclpy
from rclpy.node import Node

from pynput.keyboard import Key
from pynput import keyboard

from drone_services.srv import SetAttitude


class TestController(Node):

    def __init__(self):
        super().__init__('test_controller')
        # self.cli = self.create_client(SetAttitude, 'drone/set_attitude')
        # while not self.cli.wait_for_service(timeout_sec=1.0):
        #     self.get_logger().info('service not available, waiting again...')
        self.req = SetAttitude.Request()

        self.get_logger().info("Controls:\nW - forward\nS - backward\nA - left\nD - right\nQ - rotate left\nE - rotate right\nSpace - up\nShift - down\nEsc - exit")

    def spin(self):
        with keyboard.Listener(on_press=self.on_press, on_release=self.on_release) as listener:
            while rclpy.ok() and listener.running:
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
            char = getattr(key, 'char', None)
            if isinstance(char, str):
                # self.get_logger().info('pressed ' + char)
                if char == 'w':
                    self.get_logger().info('forward')
                if char == 's':
                    self.get_logger().info('backward')
                if char == 'a':
                    self.get_logger().info('left')
                if char == 'd':
                    self.get_logger().info('right')
                if char == 'q':
                    self.get_logger().info('rotate left')
                if char == 'e':
                    self.get_logger().info('rotate right')
            else:
                try:
                    # known keys like spacebar, ctrl
                    name = key.name
                    vk = key.value.vk
                except AttributeError:
                    # unknown keys like headphones skip song button
                    name = 'UNKNOWN'
                    vk = key.vk
                # self.get_logger().info('pressed {} ({})'.format(name, vk))
                if vk == 32:
                    self.get_logger().info('up')
                if vk == 65505:
                    self.get_logger().info('down')
        except Exception as e:
            self.get_logger().error(str(e))
            raise

        if key == keyboard.Key.esc:
            self.get_logger().info('stopping listener')
            raise keyboard.Listener.StopException


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
