// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorsStatusMag.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_MAG__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_MAG__BUILDER_HPP_

#include "px4_msgs/msg/detail/sensors_status_mag__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorsStatusMag_external
{
public:
  explicit Init_SensorsStatusMag_external(::px4_msgs::msg::SensorsStatusMag & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorsStatusMag external(::px4_msgs::msg::SensorsStatusMag::_external_type arg)
  {
    msg_.external = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

class Init_SensorsStatusMag_enabled
{
public:
  explicit Init_SensorsStatusMag_enabled(::px4_msgs::msg::SensorsStatusMag & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusMag_external enabled(::px4_msgs::msg::SensorsStatusMag::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_SensorsStatusMag_external(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

class Init_SensorsStatusMag_priority
{
public:
  explicit Init_SensorsStatusMag_priority(::px4_msgs::msg::SensorsStatusMag & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusMag_enabled priority(::px4_msgs::msg::SensorsStatusMag::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_SensorsStatusMag_enabled(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

class Init_SensorsStatusMag_healthy
{
public:
  explicit Init_SensorsStatusMag_healthy(::px4_msgs::msg::SensorsStatusMag & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusMag_priority healthy(::px4_msgs::msg::SensorsStatusMag::_healthy_type arg)
  {
    msg_.healthy = std::move(arg);
    return Init_SensorsStatusMag_priority(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

class Init_SensorsStatusMag_inconsistency
{
public:
  explicit Init_SensorsStatusMag_inconsistency(::px4_msgs::msg::SensorsStatusMag & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusMag_healthy inconsistency(::px4_msgs::msg::SensorsStatusMag::_inconsistency_type arg)
  {
    msg_.inconsistency = std::move(arg);
    return Init_SensorsStatusMag_healthy(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

class Init_SensorsStatusMag_device_ids
{
public:
  explicit Init_SensorsStatusMag_device_ids(::px4_msgs::msg::SensorsStatusMag & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusMag_inconsistency device_ids(::px4_msgs::msg::SensorsStatusMag::_device_ids_type arg)
  {
    msg_.device_ids = std::move(arg);
    return Init_SensorsStatusMag_inconsistency(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

class Init_SensorsStatusMag_device_id_primary
{
public:
  explicit Init_SensorsStatusMag_device_id_primary(::px4_msgs::msg::SensorsStatusMag & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusMag_device_ids device_id_primary(::px4_msgs::msg::SensorsStatusMag::_device_id_primary_type arg)
  {
    msg_.device_id_primary = std::move(arg);
    return Init_SensorsStatusMag_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

class Init_SensorsStatusMag_timestamp
{
public:
  Init_SensorsStatusMag_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorsStatusMag_device_id_primary timestamp(::px4_msgs::msg::SensorsStatusMag::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorsStatusMag_device_id_primary(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusMag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorsStatusMag>()
{
  return px4_msgs::msg::builder::Init_SensorsStatusMag_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_MAG__BUILDER_HPP_
