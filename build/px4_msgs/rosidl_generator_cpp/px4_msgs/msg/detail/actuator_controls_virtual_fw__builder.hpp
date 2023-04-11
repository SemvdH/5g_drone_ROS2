// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorControlsVirtualFw.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_VIRTUAL_FW__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_VIRTUAL_FW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_controls_virtual_fw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorControlsVirtualFw_control
{
public:
  explicit Init_ActuatorControlsVirtualFw_control(::px4_msgs::msg::ActuatorControlsVirtualFw & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorControlsVirtualFw control(::px4_msgs::msg::ActuatorControlsVirtualFw::_control_type arg)
  {
    msg_.control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsVirtualFw msg_;
};

class Init_ActuatorControlsVirtualFw_timestamp_sample
{
public:
  explicit Init_ActuatorControlsVirtualFw_timestamp_sample(::px4_msgs::msg::ActuatorControlsVirtualFw & msg)
  : msg_(msg)
  {}
  Init_ActuatorControlsVirtualFw_control timestamp_sample(::px4_msgs::msg::ActuatorControlsVirtualFw::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ActuatorControlsVirtualFw_control(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsVirtualFw msg_;
};

class Init_ActuatorControlsVirtualFw_timestamp
{
public:
  Init_ActuatorControlsVirtualFw_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorControlsVirtualFw_timestamp_sample timestamp(::px4_msgs::msg::ActuatorControlsVirtualFw::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorControlsVirtualFw_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsVirtualFw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorControlsVirtualFw>()
{
  return px4_msgs::msg::builder::Init_ActuatorControlsVirtualFw_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_VIRTUAL_FW__BUILDER_HPP_
