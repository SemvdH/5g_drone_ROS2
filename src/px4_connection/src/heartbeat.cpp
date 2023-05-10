/**
 * @file heartbeat.cpp
 * @author Sem van der Hoeven (sem.hoeven@gmail.com)
 * @brief Heartbeat node that keeps the connection between the flight computer
 * and PX4 flight controller alive by sending OffboardControl messages
 */
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include <px4_msgs/msg/offboard_control_mode.hpp>
#include <drone_services/srv/set_vehicle_control.hpp>

#define CONTROL_ACTUATOR_POS 0
#define CONTROL_BODY_RATE_POS 1
#define CONTROL_ATTITUDE_POS 2
#define CONTROL_ACCELERATION_POS 3
#define CONTROL_VELOCITY_POS 4
#define CONTROL_POSITION_POS 5

using namespace std::chrono_literals;

class HeartBeat : public rclcpp::Node
{
public:
    HeartBeat() : Node("heartbeat")
    {
        // disarm_service_ = this->create_service<std_srvs::srv::Empty>("drone/disarm", std::bind(&PX4Controller::handle_disarm_request, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        vehicle_control_mode_service_ = this->create_service<drone_services::srv::SetVehicleControl>("drone/set_vehicle_control", std::bind(&Heartbeat::handle_vehicle_control_change, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        // create a publisher on the offboard control mode topic
        offboard_control_mode_publisher_ = this->create_publisher<px4_msgs::msg::OffboardControlMode>("/fmu/in/offboard_control_mode", 10);
        // create timer to send heartbeat messages (offboard control) every 100ms
        timer_ = this->create_wall_timer(100ms, std::bind(&HeartBeat::send_heartbeat, this));
        start_time = this->get_clock()->now().seconds();
        RCLCPP_INFO(this->get_logger(), "done initializing at %d seconds. Sending heartbeat...", start_time);
    }

private:
    // publisher for offboard control mode messages
    rclcpp::Publisher<px4_msgs::msg::OffboardControlMode>::SharedPtr offboard_control_mode_publisher_;
    // timer for sending the heartbeat
    rclcpp::TimerBase::SharedPtr timer_;
    // start time of node in seconds
    double start_time;
    // which level of control is needed, only attitude control by default
    int control_mode = 1 << CONTROL_ATTITUDE_POS;
    // service to change vehicle_mode
    rclcpp::Service<drone_services::srv::SetVehicleControl>::SharedPtr vehicle_control_mode_service_;
    /**
     * @brief Publish offboard control mode messages as a heartbeat.
     *        Only the attitude is enabled, because that is how the drone will be controlled.
     *
     */
    void send_heartbeat()
    {
        // set message to enable attitude based on control mode variable
        auto msg = px4_msgs::msg::OffboardControlMode();
        msg.position = (this->control_mode >> CONTROL_POSITION_POS) & 1 ? true : false;
        msg.velocity = (this->control_mode >> CONTROL_VELOCITY_POS) & 1 ? true : false;
        msg.acceleration = (this->control_mode >> CONTROL_ACCELERATION_POS) & 1 ? true : false;
        msg.attitude = (this->control_mode >> CONTROL_ATTITUDE_POS) & 1 ? true : false;
        msg.body_rate = (this->control_mode >> CONTROL_BODY_RATE_POS) & 1 ? true : false;
        msg.actuator = (this->control_mode >> CONTROL_ACTUATOR_POS) & 1 ? true : false;

        // get timestamp and publish message
        msg.timestamp = this->get_clock()->now().nanoseconds() / 1000;
        offboard_control_mode_publisher_->publish(msg);
    }

    void handle_vehicle_control_change(
        const std::shared_ptr<rmw_request_id_t> request_header,
        const std::shared_ptr<drone_services::srv::SetVehicleControl::Request> request,
        const std::shared_ptr<drone_services::srv::SetVehicleControl::Response> response)
    {
        // if (request->control < 0 || request->control > CONTROL_POSITION_POS)
        // {
        //     response->status = 1;
        // } else {
        //     this->control_mode = request->control
        //     RCLCPP_INFO(this->get_logger(), "set control mode to %d", this->control_mode)
        //     response->status = 0;
        // }

    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HeartBeat>());
    rclcpp::shutdown();
    return 0;
}
