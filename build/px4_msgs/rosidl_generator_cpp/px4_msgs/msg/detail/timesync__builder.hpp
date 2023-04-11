// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Timesync.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TIMESYNC__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TIMESYNC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/timesync__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Timesync_ts1
{
public:
  explicit Init_Timesync_ts1(::px4_msgs::msg::Timesync & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Timesync ts1(::px4_msgs::msg::Timesync::_ts1_type arg)
  {
    msg_.ts1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Timesync msg_;
};

class Init_Timesync_tc1
{
public:
  explicit Init_Timesync_tc1(::px4_msgs::msg::Timesync & msg)
  : msg_(msg)
  {}
  Init_Timesync_ts1 tc1(::px4_msgs::msg::Timesync::_tc1_type arg)
  {
    msg_.tc1 = std::move(arg);
    return Init_Timesync_ts1(msg_);
  }

private:
  ::px4_msgs::msg::Timesync msg_;
};

class Init_Timesync_seq
{
public:
  explicit Init_Timesync_seq(::px4_msgs::msg::Timesync & msg)
  : msg_(msg)
  {}
  Init_Timesync_tc1 seq(::px4_msgs::msg::Timesync::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_Timesync_tc1(msg_);
  }

private:
  ::px4_msgs::msg::Timesync msg_;
};

class Init_Timesync_timestamp
{
public:
  Init_Timesync_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timesync_seq timestamp(::px4_msgs::msg::Timesync::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Timesync_seq(msg_);
  }

private:
  ::px4_msgs::msg::Timesync msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Timesync>()
{
  return px4_msgs::msg::builder::Init_Timesync_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TIMESYNC__BUILDER_HPP_
