// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SafetyButton.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SAFETY_BUTTON__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SAFETY_BUTTON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/safety_button__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyButton_triggered
{
public:
  explicit Init_SafetyButton_triggered(::px4_msgs::msg::SafetyButton & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SafetyButton triggered(::px4_msgs::msg::SafetyButton::_triggered_type arg)
  {
    msg_.triggered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SafetyButton msg_;
};

class Init_SafetyButton_timestamp
{
public:
  Init_SafetyButton_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyButton_triggered timestamp(::px4_msgs::msg::SafetyButton::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SafetyButton_triggered(msg_);
  }

private:
  ::px4_msgs::msg::SafetyButton msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SafetyButton>()
{
  return px4_msgs::msg::builder::Init_SafetyButton_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SAFETY_BUTTON__BUILDER_HPP_
