// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__BUILDER_HPP_

#include "px4_msgs/msg/detail/optical_flow__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OpticalFlow_mode
{
public:
  explicit Init_OpticalFlow_mode(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OpticalFlow mode(::px4_msgs::msg::OpticalFlow::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_max_ground_distance
{
public:
  explicit Init_OpticalFlow_max_ground_distance(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_mode max_ground_distance(::px4_msgs::msg::OpticalFlow::_max_ground_distance_type arg)
  {
    msg_.max_ground_distance = std::move(arg);
    return Init_OpticalFlow_mode(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_min_ground_distance
{
public:
  explicit Init_OpticalFlow_min_ground_distance(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_max_ground_distance min_ground_distance(::px4_msgs::msg::OpticalFlow::_min_ground_distance_type arg)
  {
    msg_.min_ground_distance = std::move(arg);
    return Init_OpticalFlow_max_ground_distance(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_max_flow_rate
{
public:
  explicit Init_OpticalFlow_max_flow_rate(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_min_ground_distance max_flow_rate(::px4_msgs::msg::OpticalFlow::_max_flow_rate_type arg)
  {
    msg_.max_flow_rate = std::move(arg);
    return Init_OpticalFlow_min_ground_distance(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_quality
{
public:
  explicit Init_OpticalFlow_quality(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_max_flow_rate quality(::px4_msgs::msg::OpticalFlow::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_OpticalFlow_max_flow_rate(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_gyro_temperature
{
public:
  explicit Init_OpticalFlow_gyro_temperature(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_quality gyro_temperature(::px4_msgs::msg::OpticalFlow::_gyro_temperature_type arg)
  {
    msg_.gyro_temperature = std::move(arg);
    return Init_OpticalFlow_quality(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_frame_count_since_last_readout
{
public:
  explicit Init_OpticalFlow_frame_count_since_last_readout(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_gyro_temperature frame_count_since_last_readout(::px4_msgs::msg::OpticalFlow::_frame_count_since_last_readout_type arg)
  {
    msg_.frame_count_since_last_readout = std::move(arg);
    return Init_OpticalFlow_gyro_temperature(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_time_since_last_sonar_update
{
public:
  explicit Init_OpticalFlow_time_since_last_sonar_update(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_frame_count_since_last_readout time_since_last_sonar_update(::px4_msgs::msg::OpticalFlow::_time_since_last_sonar_update_type arg)
  {
    msg_.time_since_last_sonar_update = std::move(arg);
    return Init_OpticalFlow_frame_count_since_last_readout(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_integration_timespan
{
public:
  explicit Init_OpticalFlow_integration_timespan(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_time_since_last_sonar_update integration_timespan(::px4_msgs::msg::OpticalFlow::_integration_timespan_type arg)
  {
    msg_.integration_timespan = std::move(arg);
    return Init_OpticalFlow_time_since_last_sonar_update(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_ground_distance_m
{
public:
  explicit Init_OpticalFlow_ground_distance_m(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_integration_timespan ground_distance_m(::px4_msgs::msg::OpticalFlow::_ground_distance_m_type arg)
  {
    msg_.ground_distance_m = std::move(arg);
    return Init_OpticalFlow_integration_timespan(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_gyro_z_rate_integral
{
public:
  explicit Init_OpticalFlow_gyro_z_rate_integral(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_ground_distance_m gyro_z_rate_integral(::px4_msgs::msg::OpticalFlow::_gyro_z_rate_integral_type arg)
  {
    msg_.gyro_z_rate_integral = std::move(arg);
    return Init_OpticalFlow_ground_distance_m(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_gyro_y_rate_integral
{
public:
  explicit Init_OpticalFlow_gyro_y_rate_integral(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_gyro_z_rate_integral gyro_y_rate_integral(::px4_msgs::msg::OpticalFlow::_gyro_y_rate_integral_type arg)
  {
    msg_.gyro_y_rate_integral = std::move(arg);
    return Init_OpticalFlow_gyro_z_rate_integral(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_gyro_x_rate_integral
{
public:
  explicit Init_OpticalFlow_gyro_x_rate_integral(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_gyro_y_rate_integral gyro_x_rate_integral(::px4_msgs::msg::OpticalFlow::_gyro_x_rate_integral_type arg)
  {
    msg_.gyro_x_rate_integral = std::move(arg);
    return Init_OpticalFlow_gyro_y_rate_integral(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_pixel_flow_y_integral
{
public:
  explicit Init_OpticalFlow_pixel_flow_y_integral(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_gyro_x_rate_integral pixel_flow_y_integral(::px4_msgs::msg::OpticalFlow::_pixel_flow_y_integral_type arg)
  {
    msg_.pixel_flow_y_integral = std::move(arg);
    return Init_OpticalFlow_gyro_x_rate_integral(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_pixel_flow_x_integral
{
public:
  explicit Init_OpticalFlow_pixel_flow_x_integral(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_pixel_flow_y_integral pixel_flow_x_integral(::px4_msgs::msg::OpticalFlow::_pixel_flow_x_integral_type arg)
  {
    msg_.pixel_flow_x_integral = std::move(arg);
    return Init_OpticalFlow_pixel_flow_y_integral(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_sensor_id
{
public:
  explicit Init_OpticalFlow_sensor_id(::px4_msgs::msg::OpticalFlow & msg)
  : msg_(msg)
  {}
  Init_OpticalFlow_pixel_flow_x_integral sensor_id(::px4_msgs::msg::OpticalFlow::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_OpticalFlow_pixel_flow_x_integral(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

class Init_OpticalFlow_timestamp
{
public:
  Init_OpticalFlow_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpticalFlow_sensor_id timestamp(::px4_msgs::msg::OpticalFlow::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OpticalFlow_sensor_id(msg_);
  }

private:
  ::px4_msgs::msg::OpticalFlow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OpticalFlow>()
{
  return px4_msgs::msg::builder::Init_OpticalFlow_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__BUILDER_HPP_
