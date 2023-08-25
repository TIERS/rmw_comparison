import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time
import math
from math import radians


class SquareMovement(Node):
    def __init__(self):
        super().__init__('square_movement')        
        self.cmd_vel_pub = self.create_publisher(Twist, 'turtle07/cmd_vel', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.count = 0
        self.loops = 30 # 30 loops at 10 Hz, takes around 3s

    	# create two different Twist() variables.  One for moving forward.  One for turning 30 degrees.

        # let's go forward at 0.3333 m/s
        self.move_cmd = Twist()
        self.move_cmd.linear.x = 1.0/3.0
	    # by default angular.z is 0 so setting this isn't required

        #let's turn at 30 deg/s
        self.turn_cmd = Twist()
        self.turn_cmd.linear.x = 0.0
        self.turn_cmd.angular.z = radians(90/3); #30 deg/s in radians/s

    def timer_callback(self):
        #two keep drawing squares.  Go forward for 3 seconds (10 x 5 HZ) then turn for 3 second
	    # go forward 1 m (5 seconds * 0.2 m / seconds)
        # 240 is one circle, one circle takes 24s
        if self.count <= 1200:
            if (self.count // self.loops) % 2 == 0: # Even number
                self.get_logger().info("Going Straight")
                self.cmd_vel_pub.publish(self.move_cmd)
            else:
                self.get_logger().info("Turning")
                self.cmd_vel_pub.publish(self.turn_cmd)
            self.count += 1
            self.get_logger().info('count: %d' % self.count)
        else: 
            self.stop_turtlebot()


    def stop_turtlebot(self):
        stop_cmd = Twist()
        stop_cmd.linear.x = 0.0
        stop_cmd.angular.z = 0.0

        self.get_logger().info("Stop")
        self.cmd_vel_pub.publish(stop_cmd)


def main(args=None):
    start_time = time.time()
    rclpy.init(args=args)
    square_movement = SquareMovement()
    rclpy.spin(square_movement)
    square_movement.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
