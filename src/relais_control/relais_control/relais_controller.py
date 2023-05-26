import rclpy
from rclpy.node import Node
import sys

try:
    import RPi.GPIO as GPIO
except RuntimeError:
    print("Error importing RPi.GPIO!")
    sys.exit(-1)

from drone_services.srv import ControlRelais
class RelaisController(Node):
    def __init__(self):
        super().__init__('relais_controller')
        self.srv = self.create_service(ControlRelais, '/drone/control_relais', self.control_relais_callback)

        self.relais1_pin = 17
        self.relais2_pin = 27
        self.init_gpio()
        self.turn_relais_on()
    
    def init_gpio(self):
        GPIO.setwarnings(False)

        self.get_logger().info(str(GPIO.RPI_INFO))

        GPIO.setmode(GPIO.BCM)

        GPIO.setup(self.relais1_pin, GPIO.OUT)
        GPIO.setup(self.relais2_pin, GPIO.OUT)
        self.get_logger().info("GPIO initialized")

    def turn_relais_on(self):
        GPIO.output(self.relais1_pin, GPIO.HIGH)
        GPIO.output(self.relais2_pin, GPIO.HIGH)
        self.get_logger().info("Relais turned on")

    def control_relais_callback(self, request, response):
        if request.relais1_on:
            GPIO.output(self.relais1_pin, GPIO.HIGH)
            response.bits = response.bits | 1
        else:
            GPIO.output(self.relais1_pin, GPIO.LOW)
            response.bits = response.bits & ~(1 << 0)
        if request.relais2_on:
            GPIO.output(self.relais2_pin, GPIO.HIGH)
            response.bits = response.bits | (1 << 1)
        else:
            GPIO.output(self.relais2_pin, GPIO.LOW)
            response.bits = response.bits & ~(1 << 1)
        return response

def main(args=None):
    rclpy.init(args=args)
    relais_controller = RelaisController()
    rclpy.spin(relais_controller)
    relais_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()