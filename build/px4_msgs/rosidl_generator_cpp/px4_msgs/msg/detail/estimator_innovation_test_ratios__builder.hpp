// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorInnovationTestRatios.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATION_TEST_RATIOS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATION_TEST_RATIOS__BUILDER_HPP_

#include "px4_msgs/msg/detail/estimator_innovation_test_ratios__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorInnovationTestRatios_hagl_rate
{
public:
  explicit Init_EstimatorInnovationTestRatios_hagl_rate(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorInnovationTestRatios hagl_rate(::px4_msgs::msg::EstimatorInnovationTestRatios::_hagl_rate_type arg)
  {
    msg_.hagl_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_hagl
{
public:
  explicit Init_EstimatorInnovationTestRatios_hagl(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_hagl_rate hagl(::px4_msgs::msg::EstimatorInnovationTestRatios::_hagl_type arg)
  {
    msg_.hagl = std::move(arg);
    return Init_EstimatorInnovationTestRatios_hagl_rate(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_beta
{
public:
  explicit Init_EstimatorInnovationTestRatios_beta(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_hagl beta(::px4_msgs::msg::EstimatorInnovationTestRatios::_beta_type arg)
  {
    msg_.beta = std::move(arg);
    return Init_EstimatorInnovationTestRatios_hagl(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_airspeed
{
public:
  explicit Init_EstimatorInnovationTestRatios_airspeed(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_beta airspeed(::px4_msgs::msg::EstimatorInnovationTestRatios::_airspeed_type arg)
  {
    msg_.airspeed = std::move(arg);
    return Init_EstimatorInnovationTestRatios_beta(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_drag
{
public:
  explicit Init_EstimatorInnovationTestRatios_drag(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_airspeed drag(::px4_msgs::msg::EstimatorInnovationTestRatios::_drag_type arg)
  {
    msg_.drag = std::move(arg);
    return Init_EstimatorInnovationTestRatios_airspeed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_mag_field
{
public:
  explicit Init_EstimatorInnovationTestRatios_mag_field(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_drag mag_field(::px4_msgs::msg::EstimatorInnovationTestRatios::_mag_field_type arg)
  {
    msg_.mag_field = std::move(arg);
    return Init_EstimatorInnovationTestRatios_drag(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_heading
{
public:
  explicit Init_EstimatorInnovationTestRatios_heading(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_mag_field heading(::px4_msgs::msg::EstimatorInnovationTestRatios::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_EstimatorInnovationTestRatios_mag_field(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_flow
{
public:
  explicit Init_EstimatorInnovationTestRatios_flow(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_heading flow(::px4_msgs::msg::EstimatorInnovationTestRatios::_flow_type arg)
  {
    msg_.flow = std::move(arg);
    return Init_EstimatorInnovationTestRatios_heading(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_aux_vvel
{
public:
  explicit Init_EstimatorInnovationTestRatios_aux_vvel(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_flow aux_vvel(::px4_msgs::msg::EstimatorInnovationTestRatios::_aux_vvel_type arg)
  {
    msg_.aux_vvel = std::move(arg);
    return Init_EstimatorInnovationTestRatios_flow(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_aux_hvel
{
public:
  explicit Init_EstimatorInnovationTestRatios_aux_hvel(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_aux_vvel aux_hvel(::px4_msgs::msg::EstimatorInnovationTestRatios::_aux_hvel_type arg)
  {
    msg_.aux_hvel = std::move(arg);
    return Init_EstimatorInnovationTestRatios_aux_vvel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_baro_vpos
{
public:
  explicit Init_EstimatorInnovationTestRatios_baro_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_aux_hvel baro_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios::_baro_vpos_type arg)
  {
    msg_.baro_vpos = std::move(arg);
    return Init_EstimatorInnovationTestRatios_aux_hvel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_rng_vpos
{
public:
  explicit Init_EstimatorInnovationTestRatios_rng_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_baro_vpos rng_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios::_rng_vpos_type arg)
  {
    msg_.rng_vpos = std::move(arg);
    return Init_EstimatorInnovationTestRatios_baro_vpos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_ev_vpos
{
public:
  explicit Init_EstimatorInnovationTestRatios_ev_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_rng_vpos ev_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios::_ev_vpos_type arg)
  {
    msg_.ev_vpos = std::move(arg);
    return Init_EstimatorInnovationTestRatios_rng_vpos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_ev_hpos
{
public:
  explicit Init_EstimatorInnovationTestRatios_ev_hpos(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_ev_vpos ev_hpos(::px4_msgs::msg::EstimatorInnovationTestRatios::_ev_hpos_type arg)
  {
    msg_.ev_hpos = std::move(arg);
    return Init_EstimatorInnovationTestRatios_ev_vpos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_ev_vvel
{
public:
  explicit Init_EstimatorInnovationTestRatios_ev_vvel(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_ev_hpos ev_vvel(::px4_msgs::msg::EstimatorInnovationTestRatios::_ev_vvel_type arg)
  {
    msg_.ev_vvel = std::move(arg);
    return Init_EstimatorInnovationTestRatios_ev_hpos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_ev_hvel
{
public:
  explicit Init_EstimatorInnovationTestRatios_ev_hvel(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_ev_vvel ev_hvel(::px4_msgs::msg::EstimatorInnovationTestRatios::_ev_hvel_type arg)
  {
    msg_.ev_hvel = std::move(arg);
    return Init_EstimatorInnovationTestRatios_ev_vvel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_gps_vpos
{
public:
  explicit Init_EstimatorInnovationTestRatios_gps_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_ev_hvel gps_vpos(::px4_msgs::msg::EstimatorInnovationTestRatios::_gps_vpos_type arg)
  {
    msg_.gps_vpos = std::move(arg);
    return Init_EstimatorInnovationTestRatios_ev_hvel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_gps_hpos
{
public:
  explicit Init_EstimatorInnovationTestRatios_gps_hpos(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_gps_vpos gps_hpos(::px4_msgs::msg::EstimatorInnovationTestRatios::_gps_hpos_type arg)
  {
    msg_.gps_hpos = std::move(arg);
    return Init_EstimatorInnovationTestRatios_gps_vpos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_gps_vvel
{
public:
  explicit Init_EstimatorInnovationTestRatios_gps_vvel(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_gps_hpos gps_vvel(::px4_msgs::msg::EstimatorInnovationTestRatios::_gps_vvel_type arg)
  {
    msg_.gps_vvel = std::move(arg);
    return Init_EstimatorInnovationTestRatios_gps_hpos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_gps_hvel
{
public:
  explicit Init_EstimatorInnovationTestRatios_gps_hvel(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_gps_vvel gps_hvel(::px4_msgs::msg::EstimatorInnovationTestRatios::_gps_hvel_type arg)
  {
    msg_.gps_hvel = std::move(arg);
    return Init_EstimatorInnovationTestRatios_gps_vvel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_timestamp_sample
{
public:
  explicit Init_EstimatorInnovationTestRatios_timestamp_sample(::px4_msgs::msg::EstimatorInnovationTestRatios & msg)
  : msg_(msg)
  {}
  Init_EstimatorInnovationTestRatios_gps_hvel timestamp_sample(::px4_msgs::msg::EstimatorInnovationTestRatios::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorInnovationTestRatios_gps_hvel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

class Init_EstimatorInnovationTestRatios_timestamp
{
public:
  Init_EstimatorInnovationTestRatios_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorInnovationTestRatios_timestamp_sample timestamp(::px4_msgs::msg::EstimatorInnovationTestRatios::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorInnovationTestRatios_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorInnovationTestRatios msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorInnovationTestRatios>()
{
  return px4_msgs::msg::builder::Init_EstimatorInnovationTestRatios_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATION_TEST_RATIOS__BUILDER_HPP_
