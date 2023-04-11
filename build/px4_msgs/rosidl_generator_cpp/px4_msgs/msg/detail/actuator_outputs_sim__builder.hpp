// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorOutputsSim.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_outputs_sim__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorOutputsSim_output
{
public:
  explicit Init_ActuatorOutputsSim_output(::px4_msgs::msg::ActuatorOutputsSim & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorOutputsSim output(::px4_msgs::msg::ActuatorOutputsSim::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorOutputsSim msg_;
};

class Init_ActuatorOutputsSim_noutputs
{
public:
  explicit Init_ActuatorOutputsSim_noutputs(::px4_msgs::msg::ActuatorOutputsSim & msg)
  : msg_(msg)
  {}
  Init_ActuatorOutputsSim_output noutputs(::px4_msgs::msg::ActuatorOutputsSim::_noutputs_type arg)
  {
    msg_.noutputs = std::move(arg);
    return Init_ActuatorOutputsSim_output(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorOutputsSim msg_;
};

class Init_ActuatorOutputsSim_timestamp
{
public:
  Init_ActuatorOutputsSim_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorOutputsSim_noutputs timestamp(::px4_msgs::msg::ActuatorOutputsSim::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorOutputsSim_noutputs(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorOutputsSim msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorOutputsSim>()
{
  return px4_msgs::msg::builder::Init_ActuatorOutputsSim_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__BUILDER_HPP_
