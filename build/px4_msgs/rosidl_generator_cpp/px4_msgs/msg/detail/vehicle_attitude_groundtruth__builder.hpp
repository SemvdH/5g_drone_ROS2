// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleAttitudeGroundtruth.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_GROUNDTRUTH__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_GROUNDTRUTH__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_attitude_groundtruth__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleAttitudeGroundtruth_quat_reset_counter
{
public:
  explicit Init_VehicleAttitudeGroundtruth_quat_reset_counter(::px4_msgs::msg::VehicleAttitudeGroundtruth & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleAttitudeGroundtruth quat_reset_counter(::px4_msgs::msg::VehicleAttitudeGroundtruth::_quat_reset_counter_type arg)
  {
    msg_.quat_reset_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAttitudeGroundtruth msg_;
};

class Init_VehicleAttitudeGroundtruth_delta_q_reset
{
public:
  explicit Init_VehicleAttitudeGroundtruth_delta_q_reset(::px4_msgs::msg::VehicleAttitudeGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleAttitudeGroundtruth_quat_reset_counter delta_q_reset(::px4_msgs::msg::VehicleAttitudeGroundtruth::_delta_q_reset_type arg)
  {
    msg_.delta_q_reset = std::move(arg);
    return Init_VehicleAttitudeGroundtruth_quat_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAttitudeGroundtruth msg_;
};

class Init_VehicleAttitudeGroundtruth_q
{
public:
  explicit Init_VehicleAttitudeGroundtruth_q(::px4_msgs::msg::VehicleAttitudeGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleAttitudeGroundtruth_delta_q_reset q(::px4_msgs::msg::VehicleAttitudeGroundtruth::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_VehicleAttitudeGroundtruth_delta_q_reset(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAttitudeGroundtruth msg_;
};

class Init_VehicleAttitudeGroundtruth_timestamp_sample
{
public:
  explicit Init_VehicleAttitudeGroundtruth_timestamp_sample(::px4_msgs::msg::VehicleAttitudeGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleAttitudeGroundtruth_q timestamp_sample(::px4_msgs::msg::VehicleAttitudeGroundtruth::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleAttitudeGroundtruth_q(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAttitudeGroundtruth msg_;
};

class Init_VehicleAttitudeGroundtruth_timestamp
{
public:
  Init_VehicleAttitudeGroundtruth_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleAttitudeGroundtruth_timestamp_sample timestamp(::px4_msgs::msg::VehicleAttitudeGroundtruth::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleAttitudeGroundtruth_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAttitudeGroundtruth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleAttitudeGroundtruth>()
{
  return px4_msgs::msg::builder::Init_VehicleAttitudeGroundtruth_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_GROUNDTRUTH__BUILDER_HPP_
