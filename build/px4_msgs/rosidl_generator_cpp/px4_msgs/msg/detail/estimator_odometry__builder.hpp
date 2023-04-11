// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_ODOMETRY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorOdometry_reset_counter
{
public:
  explicit Init_EstimatorOdometry_reset_counter(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorOdometry reset_counter(::px4_msgs::msg::EstimatorOdometry::_reset_counter_type arg)
  {
    msg_.reset_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_velocity_covariance
{
public:
  explicit Init_EstimatorOdometry_velocity_covariance(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_reset_counter velocity_covariance(::px4_msgs::msg::EstimatorOdometry::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return Init_EstimatorOdometry_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_yawspeed
{
public:
  explicit Init_EstimatorOdometry_yawspeed(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_velocity_covariance yawspeed(::px4_msgs::msg::EstimatorOdometry::_yawspeed_type arg)
  {
    msg_.yawspeed = std::move(arg);
    return Init_EstimatorOdometry_velocity_covariance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_pitchspeed
{
public:
  explicit Init_EstimatorOdometry_pitchspeed(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_yawspeed pitchspeed(::px4_msgs::msg::EstimatorOdometry::_pitchspeed_type arg)
  {
    msg_.pitchspeed = std::move(arg);
    return Init_EstimatorOdometry_yawspeed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_rollspeed
{
public:
  explicit Init_EstimatorOdometry_rollspeed(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_pitchspeed rollspeed(::px4_msgs::msg::EstimatorOdometry::_rollspeed_type arg)
  {
    msg_.rollspeed = std::move(arg);
    return Init_EstimatorOdometry_pitchspeed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_vz
{
public:
  explicit Init_EstimatorOdometry_vz(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_rollspeed vz(::px4_msgs::msg::EstimatorOdometry::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_EstimatorOdometry_rollspeed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_vy
{
public:
  explicit Init_EstimatorOdometry_vy(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_vz vy(::px4_msgs::msg::EstimatorOdometry::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_EstimatorOdometry_vz(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_vx
{
public:
  explicit Init_EstimatorOdometry_vx(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_vy vx(::px4_msgs::msg::EstimatorOdometry::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_EstimatorOdometry_vy(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_velocity_frame
{
public:
  explicit Init_EstimatorOdometry_velocity_frame(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_vx velocity_frame(::px4_msgs::msg::EstimatorOdometry::_velocity_frame_type arg)
  {
    msg_.velocity_frame = std::move(arg);
    return Init_EstimatorOdometry_vx(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_pose_covariance
{
public:
  explicit Init_EstimatorOdometry_pose_covariance(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_velocity_frame pose_covariance(::px4_msgs::msg::EstimatorOdometry::_pose_covariance_type arg)
  {
    msg_.pose_covariance = std::move(arg);
    return Init_EstimatorOdometry_velocity_frame(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_q_offset
{
public:
  explicit Init_EstimatorOdometry_q_offset(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_pose_covariance q_offset(::px4_msgs::msg::EstimatorOdometry::_q_offset_type arg)
  {
    msg_.q_offset = std::move(arg);
    return Init_EstimatorOdometry_pose_covariance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_q
{
public:
  explicit Init_EstimatorOdometry_q(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_q_offset q(::px4_msgs::msg::EstimatorOdometry::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_EstimatorOdometry_q_offset(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_z
{
public:
  explicit Init_EstimatorOdometry_z(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_q z(::px4_msgs::msg::EstimatorOdometry::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_EstimatorOdometry_q(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_y
{
public:
  explicit Init_EstimatorOdometry_y(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_z y(::px4_msgs::msg::EstimatorOdometry::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EstimatorOdometry_z(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_x
{
public:
  explicit Init_EstimatorOdometry_x(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_y x(::px4_msgs::msg::EstimatorOdometry::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EstimatorOdometry_y(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_local_frame
{
public:
  explicit Init_EstimatorOdometry_local_frame(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_x local_frame(::px4_msgs::msg::EstimatorOdometry::_local_frame_type arg)
  {
    msg_.local_frame = std::move(arg);
    return Init_EstimatorOdometry_x(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_timestamp_sample
{
public:
  explicit Init_EstimatorOdometry_timestamp_sample(::px4_msgs::msg::EstimatorOdometry & msg)
  : msg_(msg)
  {}
  Init_EstimatorOdometry_local_frame timestamp_sample(::px4_msgs::msg::EstimatorOdometry::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorOdometry_local_frame(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

class Init_EstimatorOdometry_timestamp
{
public:
  Init_EstimatorOdometry_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorOdometry_timestamp_sample timestamp(::px4_msgs::msg::EstimatorOdometry::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorOdometry_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorOdometry>()
{
  return px4_msgs::msg::builder::Init_EstimatorOdometry_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_ODOMETRY__BUILDER_HPP_
