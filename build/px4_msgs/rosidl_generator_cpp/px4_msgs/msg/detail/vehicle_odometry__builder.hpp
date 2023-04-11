// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleOdometry_reset_counter
{
public:
  explicit Init_VehicleOdometry_reset_counter(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleOdometry reset_counter(::px4_msgs::msg::VehicleOdometry::_reset_counter_type arg)
  {
    msg_.reset_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_velocity_covariance
{
public:
  explicit Init_VehicleOdometry_velocity_covariance(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_reset_counter velocity_covariance(::px4_msgs::msg::VehicleOdometry::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return Init_VehicleOdometry_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_yawspeed
{
public:
  explicit Init_VehicleOdometry_yawspeed(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_velocity_covariance yawspeed(::px4_msgs::msg::VehicleOdometry::_yawspeed_type arg)
  {
    msg_.yawspeed = std::move(arg);
    return Init_VehicleOdometry_velocity_covariance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_pitchspeed
{
public:
  explicit Init_VehicleOdometry_pitchspeed(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_yawspeed pitchspeed(::px4_msgs::msg::VehicleOdometry::_pitchspeed_type arg)
  {
    msg_.pitchspeed = std::move(arg);
    return Init_VehicleOdometry_yawspeed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_rollspeed
{
public:
  explicit Init_VehicleOdometry_rollspeed(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_pitchspeed rollspeed(::px4_msgs::msg::VehicleOdometry::_rollspeed_type arg)
  {
    msg_.rollspeed = std::move(arg);
    return Init_VehicleOdometry_pitchspeed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_vz
{
public:
  explicit Init_VehicleOdometry_vz(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_rollspeed vz(::px4_msgs::msg::VehicleOdometry::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_VehicleOdometry_rollspeed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_vy
{
public:
  explicit Init_VehicleOdometry_vy(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_vz vy(::px4_msgs::msg::VehicleOdometry::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_VehicleOdometry_vz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_vx
{
public:
  explicit Init_VehicleOdometry_vx(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_vy vx(::px4_msgs::msg::VehicleOdometry::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_VehicleOdometry_vy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_velocity_frame
{
public:
  explicit Init_VehicleOdometry_velocity_frame(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_vx velocity_frame(::px4_msgs::msg::VehicleOdometry::_velocity_frame_type arg)
  {
    msg_.velocity_frame = std::move(arg);
    return Init_VehicleOdometry_vx(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_pose_covariance
{
public:
  explicit Init_VehicleOdometry_pose_covariance(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_velocity_frame pose_covariance(::px4_msgs::msg::VehicleOdometry::_pose_covariance_type arg)
  {
    msg_.pose_covariance = std::move(arg);
    return Init_VehicleOdometry_velocity_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_q_offset
{
public:
  explicit Init_VehicleOdometry_q_offset(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_pose_covariance q_offset(::px4_msgs::msg::VehicleOdometry::_q_offset_type arg)
  {
    msg_.q_offset = std::move(arg);
    return Init_VehicleOdometry_pose_covariance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_q
{
public:
  explicit Init_VehicleOdometry_q(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_q_offset q(::px4_msgs::msg::VehicleOdometry::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_VehicleOdometry_q_offset(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_z
{
public:
  explicit Init_VehicleOdometry_z(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_q z(::px4_msgs::msg::VehicleOdometry::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_VehicleOdometry_q(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_y
{
public:
  explicit Init_VehicleOdometry_y(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_z y(::px4_msgs::msg::VehicleOdometry::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_VehicleOdometry_z(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_x
{
public:
  explicit Init_VehicleOdometry_x(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_y x(::px4_msgs::msg::VehicleOdometry::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_VehicleOdometry_y(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_local_frame
{
public:
  explicit Init_VehicleOdometry_local_frame(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_x local_frame(::px4_msgs::msg::VehicleOdometry::_local_frame_type arg)
  {
    msg_.local_frame = std::move(arg);
    return Init_VehicleOdometry_x(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_timestamp_sample
{
public:
  explicit Init_VehicleOdometry_timestamp_sample(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_local_frame timestamp_sample(::px4_msgs::msg::VehicleOdometry::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleOdometry_local_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_timestamp
{
public:
  Init_VehicleOdometry_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleOdometry_timestamp_sample timestamp(::px4_msgs::msg::VehicleOdometry::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleOdometry_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleOdometry>()
{
  return px4_msgs::msg::builder::Init_VehicleOdometry_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_
