// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OrbTestMediumQueue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_QUEUE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_QUEUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/orb_test_medium_queue__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OrbTestMediumQueue_junk
{
public:
  explicit Init_OrbTestMediumQueue_junk(::px4_msgs::msg::OrbTestMediumQueue & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OrbTestMediumQueue junk(::px4_msgs::msg::OrbTestMediumQueue::_junk_type arg)
  {
    msg_.junk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestMediumQueue msg_;
};

class Init_OrbTestMediumQueue_val
{
public:
  explicit Init_OrbTestMediumQueue_val(::px4_msgs::msg::OrbTestMediumQueue & msg)
  : msg_(msg)
  {}
  Init_OrbTestMediumQueue_junk val(::px4_msgs::msg::OrbTestMediumQueue::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_OrbTestMediumQueue_junk(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestMediumQueue msg_;
};

class Init_OrbTestMediumQueue_timestamp
{
public:
  Init_OrbTestMediumQueue_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrbTestMediumQueue_val timestamp(::px4_msgs::msg::OrbTestMediumQueue::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OrbTestMediumQueue_val(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestMediumQueue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OrbTestMediumQueue>()
{
  return px4_msgs::msg::builder::Init_OrbTestMediumQueue_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_QUEUE__BUILDER_HPP_
