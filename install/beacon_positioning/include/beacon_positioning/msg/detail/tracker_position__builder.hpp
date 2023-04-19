// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice

#ifndef BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__BUILDER_HPP_
#define BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__BUILDER_HPP_

#include "beacon_positioning/msg/detail/tracker_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace beacon_positioning
{

namespace msg
{

namespace builder
{

class Init_TrackerPosition_anchor_distances
{
public:
  explicit Init_TrackerPosition_anchor_distances(::beacon_positioning::msg::TrackerPosition & msg)
  : msg_(msg)
  {}
  ::beacon_positioning::msg::TrackerPosition anchor_distances(::beacon_positioning::msg::TrackerPosition::_anchor_distances_type arg)
  {
    msg_.anchor_distances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beacon_positioning::msg::TrackerPosition msg_;
};

class Init_TrackerPosition_z_pos
{
public:
  explicit Init_TrackerPosition_z_pos(::beacon_positioning::msg::TrackerPosition & msg)
  : msg_(msg)
  {}
  Init_TrackerPosition_anchor_distances z_pos(::beacon_positioning::msg::TrackerPosition::_z_pos_type arg)
  {
    msg_.z_pos = std::move(arg);
    return Init_TrackerPosition_anchor_distances(msg_);
  }

private:
  ::beacon_positioning::msg::TrackerPosition msg_;
};

class Init_TrackerPosition_y_pos
{
public:
  explicit Init_TrackerPosition_y_pos(::beacon_positioning::msg::TrackerPosition & msg)
  : msg_(msg)
  {}
  Init_TrackerPosition_z_pos y_pos(::beacon_positioning::msg::TrackerPosition::_y_pos_type arg)
  {
    msg_.y_pos = std::move(arg);
    return Init_TrackerPosition_z_pos(msg_);
  }

private:
  ::beacon_positioning::msg::TrackerPosition msg_;
};

class Init_TrackerPosition_x_pos
{
public:
  explicit Init_TrackerPosition_x_pos(::beacon_positioning::msg::TrackerPosition & msg)
  : msg_(msg)
  {}
  Init_TrackerPosition_y_pos x_pos(::beacon_positioning::msg::TrackerPosition::_x_pos_type arg)
  {
    msg_.x_pos = std::move(arg);
    return Init_TrackerPosition_y_pos(msg_);
  }

private:
  ::beacon_positioning::msg::TrackerPosition msg_;
};

class Init_TrackerPosition_id
{
public:
  Init_TrackerPosition_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackerPosition_x_pos id(::beacon_positioning::msg::TrackerPosition::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrackerPosition_x_pos(msg_);
  }

private:
  ::beacon_positioning::msg::TrackerPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beacon_positioning::msg::TrackerPosition>()
{
  return beacon_positioning::msg::builder::Init_TrackerPosition_id();
}

}  // namespace beacon_positioning

#endif  // BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__BUILDER_HPP_
