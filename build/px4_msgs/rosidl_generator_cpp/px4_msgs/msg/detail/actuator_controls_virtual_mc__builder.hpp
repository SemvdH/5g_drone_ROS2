// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorControlsVirtualMc.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_VIRTUAL_MC__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_VIRTUAL_MC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_controls_virtual_mc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorControlsVirtualMc_control
{
public:
  explicit Init_ActuatorControlsVirtualMc_control(::px4_msgs::msg::ActuatorControlsVirtualMc & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorControlsVirtualMc control(::px4_msgs::msg::ActuatorControlsVirtualMc::_control_type arg)
  {
    msg_.control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsVirtualMc msg_;
};

class Init_ActuatorControlsVirtualMc_timestamp_sample
{
public:
  explicit Init_ActuatorControlsVirtualMc_timestamp_sample(::px4_msgs::msg::ActuatorControlsVirtualMc & msg)
  : msg_(msg)
  {}
  Init_ActuatorControlsVirtualMc_control timestamp_sample(::px4_msgs::msg::ActuatorControlsVirtualMc::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ActuatorControlsVirtualMc_control(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsVirtualMc msg_;
};

class Init_ActuatorControlsVirtualMc_timestamp
{
public:
  Init_ActuatorControlsVirtualMc_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorControlsVirtualMc_timestamp_sample timestamp(::px4_msgs::msg::ActuatorControlsVirtualMc::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorControlsVirtualMc_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsVirtualMc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorControlsVirtualMc>()
{
  return px4_msgs::msg::builder::Init_ActuatorControlsVirtualMc_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_VIRTUAL_MC__BUILDER_HPP_
