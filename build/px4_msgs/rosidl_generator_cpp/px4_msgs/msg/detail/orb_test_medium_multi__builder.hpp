// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OrbTestMediumMulti.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_MULTI__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_MULTI__BUILDER_HPP_

#include "px4_msgs/msg/detail/orb_test_medium_multi__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OrbTestMediumMulti_junk
{
public:
  explicit Init_OrbTestMediumMulti_junk(::px4_msgs::msg::OrbTestMediumMulti & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OrbTestMediumMulti junk(::px4_msgs::msg::OrbTestMediumMulti::_junk_type arg)
  {
    msg_.junk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestMediumMulti msg_;
};

class Init_OrbTestMediumMulti_val
{
public:
  explicit Init_OrbTestMediumMulti_val(::px4_msgs::msg::OrbTestMediumMulti & msg)
  : msg_(msg)
  {}
  Init_OrbTestMediumMulti_junk val(::px4_msgs::msg::OrbTestMediumMulti::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_OrbTestMediumMulti_junk(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestMediumMulti msg_;
};

class Init_OrbTestMediumMulti_timestamp
{
public:
  Init_OrbTestMediumMulti_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrbTestMediumMulti_val timestamp(::px4_msgs::msg::OrbTestMediumMulti::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OrbTestMediumMulti_val(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestMediumMulti msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OrbTestMediumMulti>()
{
  return px4_msgs::msg::builder::Init_OrbTestMediumMulti_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_MULTI__BUILDER_HPP_
