import rclpy
from rclpy.node import Node

try:
    import RPi.GPIO as GPIO
except RuntimeError:
    print("Error importing RPi.GPIO!  This is probably because you need superuser privileges.  You can achieve this by using 'sudo' to run your script")

from drone_services.srv import ControlRelais
class RelaisController(Node):
    def __init__(self):
        super().__init__('relais_controller')
        self.srv = self.create_service(ControlRelais, 'control_relais', self.control_relais_callback)

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
        if request.relais1:
            GPIO.output(self.relais1_pin, GPIO.HIGH)
        else:
            GPIO.output(self.relais1_pin, GPIO.LOW)
        if request.relais2:
            GPIO.output(self.relais2_pin, GPIO.HIGH)
        else:
            GPIO.output(self.relais2_pin, GPIO.LOW)
        
        if GPIO.output(17) == GPIO.LOW:
            response.bits = response.bits & 0
        else:
            response.bits = response.bits | 1

        if GPIO.output(27) == GPIO.LOW:
            response.bits = response.bits & ~(1 << 1)
        else:
            response.bits = response.bits | (1 << 1)
        return response

def main(args=None):
    rclpy.init(args=args)

    relais_controller = RelaisController()

    relais_controller.spin()

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    relais_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()