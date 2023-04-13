// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_GLOBAL_POSITION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_GLOBAL_POSITION__BUILDER_HPP_

#include "px4_msgs/msg/detail/estimator_global_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorGlobalPosition_dead_reckoning
{
public:
  explicit Init_EstimatorGlobalPosition_dead_reckoning(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorGlobalPosition dead_reckoning(::px4_msgs::msg::EstimatorGlobalPosition::_dead_reckoning_type arg)
  {
    msg_.dead_reckoning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_terrain_alt_valid
{
public:
  explicit Init_EstimatorGlobalPosition_terrain_alt_valid(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_dead_reckoning terrain_alt_valid(::px4_msgs::msg::EstimatorGlobalPosition::_terrain_alt_valid_type arg)
  {
    msg_.terrain_alt_valid = std::move(arg);
    return Init_EstimatorGlobalPosition_dead_reckoning(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_terrain_alt
{
public:
  explicit Init_EstimatorGlobalPosition_terrain_alt(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_terrain_alt_valid terrain_alt(::px4_msgs::msg::EstimatorGlobalPosition::_terrain_alt_type arg)
  {
    msg_.terrain_alt = std::move(arg);
    return Init_EstimatorGlobalPosition_terrain_alt_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_epv
{
public:
  explicit Init_EstimatorGlobalPosition_epv(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_terrain_alt epv(::px4_msgs::msg::EstimatorGlobalPosition::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_EstimatorGlobalPosition_terrain_alt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_eph
{
public:
  explicit Init_EstimatorGlobalPosition_eph(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_epv eph(::px4_msgs::msg::EstimatorGlobalPosition::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_EstimatorGlobalPosition_epv(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_alt_reset_counter
{
public:
  explicit Init_EstimatorGlobalPosition_alt_reset_counter(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_eph alt_reset_counter(::px4_msgs::msg::EstimatorGlobalPosition::_alt_reset_counter_type arg)
  {
    msg_.alt_reset_counter = std::move(arg);
    return Init_EstimatorGlobalPosition_eph(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_lat_lon_reset_counter
{
public:
  explicit Init_EstimatorGlobalPosition_lat_lon_reset_counter(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_alt_reset_counter lat_lon_reset_counter(::px4_msgs::msg::EstimatorGlobalPosition::_lat_lon_reset_counter_type arg)
  {
    msg_.lat_lon_reset_counter = std::move(arg);
    return Init_EstimatorGlobalPosition_alt_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_delta_alt
{
public:
  explicit Init_EstimatorGlobalPosition_delta_alt(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_lat_lon_reset_counter delta_alt(::px4_msgs::msg::EstimatorGlobalPosition::_delta_alt_type arg)
  {
    msg_.delta_alt = std::move(arg);
    return Init_EstimatorGlobalPosition_lat_lon_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_alt_ellipsoid
{
public:
  explicit Init_EstimatorGlobalPosition_alt_ellipsoid(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_delta_alt alt_ellipsoid(::px4_msgs::msg::EstimatorGlobalPosition::_alt_ellipsoid_type arg)
  {
    msg_.alt_ellipsoid = std::move(arg);
    return Init_EstimatorGlobalPosition_delta_alt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_alt
{
public:
  explicit Init_EstimatorGlobalPosition_alt(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_alt_ellipsoid alt(::px4_msgs::msg::EstimatorGlobalPosition::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_EstimatorGlobalPosition_alt_ellipsoid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_lon
{
public:
  explicit Init_EstimatorGlobalPosition_lon(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_alt lon(::px4_msgs::msg::EstimatorGlobalPosition::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_EstimatorGlobalPosition_alt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_lat
{
public:
  explicit Init_EstimatorGlobalPosition_lat(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_lon lat(::px4_msgs::msg::EstimatorGlobalPosition::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_EstimatorGlobalPosition_lon(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_timestamp_sample
{
public:
  explicit Init_EstimatorGlobalPosition_timestamp_sample(::px4_msgs::msg::EstimatorGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorGlobalPosition_lat timestamp_sample(::px4_msgs::msg::EstimatorGlobalPosition::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorGlobalPosition_lat(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

class Init_EstimatorGlobalPosition_timestamp
{
public:
  Init_EstimatorGlobalPosition_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorGlobalPosition_timestamp_sample timestamp(::px4_msgs::msg::EstimatorGlobalPosition::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorGlobalPosition_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGlobalPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorGlobalPosition>()
{
  return px4_msgs::msg::builder::Init_EstimatorGlobalPosition_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_GLOBAL_POSITION__BUILDER_HPP_
