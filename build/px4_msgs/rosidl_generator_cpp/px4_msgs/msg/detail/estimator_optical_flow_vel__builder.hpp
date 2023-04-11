// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorOpticalFlowVel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_OPTICAL_FLOW_VEL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_OPTICAL_FLOW_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_optical_flow_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorOpticalFlowVel_gyro_rate_integral
{
public:
  explicit Init_EstimatorOpticalFlowVel_gyro_rate_integral(::px4_msgs::msg::EstimatorOpticalFlowVel & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorOpticalFlowVel gyro_rate_integral(::px4_msgs::msg::EstimatorOpticalFlowVel::_gyro_rate_integral_type arg)
  {
    msg_.gyro_rate_integral = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOpticalFlowVel msg_;
};

class Init_EstimatorOpticalFlowVel_flow_compensated_integral
{
public:
  explicit Init_EstimatorOpticalFlowVel_flow_compensated_integral(::px4_msgs::msg::EstimatorOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_EstimatorOpticalFlowVel_gyro_rate_integral flow_compensated_integral(::px4_msgs::msg::EstimatorOpticalFlowVel::_flow_compensated_integral_type arg)
  {
    msg_.flow_compensated_integral = std::move(arg);
    return Init_EstimatorOpticalFlowVel_gyro_rate_integral(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOpticalFlowVel msg_;
};

class Init_EstimatorOpticalFlowVel_flow_uncompensated_integral
{
public:
  explicit Init_EstimatorOpticalFlowVel_flow_uncompensated_integral(::px4_msgs::msg::EstimatorOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_EstimatorOpticalFlowVel_flow_compensated_integral flow_uncompensated_integral(::px4_msgs::msg::EstimatorOpticalFlowVel::_flow_uncompensated_integral_type arg)
  {
    msg_.flow_uncompensated_integral = std::move(arg);
    return Init_EstimatorOpticalFlowVel_flow_compensated_integral(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOpticalFlowVel msg_;
};

class Init_EstimatorOpticalFlowVel_vel_ne
{
public:
  explicit Init_EstimatorOpticalFlowVel_vel_ne(::px4_msgs::msg::EstimatorOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_EstimatorOpticalFlowVel_flow_uncompensated_integral vel_ne(::px4_msgs::msg::EstimatorOpticalFlowVel::_vel_ne_type arg)
  {
    msg_.vel_ne = std::move(arg);
    return Init_EstimatorOpticalFlowVel_flow_uncompensated_integral(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOpticalFlowVel msg_;
};

class Init_EstimatorOpticalFlowVel_vel_body
{
public:
  explicit Init_EstimatorOpticalFlowVel_vel_body(::px4_msgs::msg::EstimatorOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_EstimatorOpticalFlowVel_vel_ne vel_body(::px4_msgs::msg::EstimatorOpticalFlowVel::_vel_body_type arg)
  {
    msg_.vel_body = std::move(arg);
    return Init_EstimatorOpticalFlowVel_vel_ne(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOpticalFlowVel msg_;
};

class Init_EstimatorOpticalFlowVel_timestamp_sample
{
public:
  explicit Init_EstimatorOpticalFlowVel_timestamp_sample(::px4_msgs::msg::EstimatorOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_EstimatorOpticalFlowVel_vel_body timestamp_sample(::px4_msgs::msg::EstimatorOpticalFlowVel::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorOpticalFlowVel_vel_body(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOpticalFlowVel msg_;
};

class Init_EstimatorOpticalFlowVel_timestamp
{
public:
  Init_EstimatorOpticalFlowVel_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorOpticalFlowVel_timestamp_sample timestamp(::px4_msgs::msg::EstimatorOpticalFlowVel::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorOpticalFlowVel_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOpticalFlowVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorOpticalFlowVel>()
{
  return px4_msgs::msg::builder::Init_EstimatorOpticalFlowVel_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_OPTICAL_FLOW_VEL__BUILDER_HPP_
