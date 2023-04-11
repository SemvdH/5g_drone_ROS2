// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SAFETY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SAFETY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/safety__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Safety_safety_off
{
public:
  explicit Init_Safety_safety_off(::px4_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Safety safety_off(::px4_msgs::msg::Safety::_safety_off_type arg)
  {
    msg_.safety_off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Safety msg_;
};

class Init_Safety_safety_switch_available
{
public:
  explicit Init_Safety_safety_switch_available(::px4_msgs::msg::Safety & msg)
  : msg_(msg)
  {}
  Init_Safety_safety_off safety_switch_available(::px4_msgs::msg::Safety::_safety_switch_available_type arg)
  {
    msg_.safety_switch_available = std::move(arg);
    return Init_Safety_safety_off(msg_);
  }

private:
  ::px4_msgs::msg::Safety msg_;
};

class Init_Safety_timestamp
{
public:
  Init_Safety_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Safety_safety_switch_available timestamp(::px4_msgs::msg::Safety::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Safety_safety_switch_available(msg_);
  }

private:
  ::px4_msgs::msg::Safety msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Safety>()
{
  return px4_msgs::msg::builder::Init_Safety_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SAFETY__BUILDER_HPP_
