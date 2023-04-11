// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorsStatusBaro.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_BARO__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_BARO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensors_status_baro__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorsStatusBaro_external
{
public:
  explicit Init_SensorsStatusBaro_external(::px4_msgs::msg::SensorsStatusBaro & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorsStatusBaro external(::px4_msgs::msg::SensorsStatusBaro::_external_type arg)
  {
    msg_.external = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

class Init_SensorsStatusBaro_enabled
{
public:
  explicit Init_SensorsStatusBaro_enabled(::px4_msgs::msg::SensorsStatusBaro & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusBaro_external enabled(::px4_msgs::msg::SensorsStatusBaro::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_SensorsStatusBaro_external(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

class Init_SensorsStatusBaro_priority
{
public:
  explicit Init_SensorsStatusBaro_priority(::px4_msgs::msg::SensorsStatusBaro & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusBaro_enabled priority(::px4_msgs::msg::SensorsStatusBaro::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_SensorsStatusBaro_enabled(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

class Init_SensorsStatusBaro_healthy
{
public:
  explicit Init_SensorsStatusBaro_healthy(::px4_msgs::msg::SensorsStatusBaro & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusBaro_priority healthy(::px4_msgs::msg::SensorsStatusBaro::_healthy_type arg)
  {
    msg_.healthy = std::move(arg);
    return Init_SensorsStatusBaro_priority(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

class Init_SensorsStatusBaro_inconsistency
{
public:
  explicit Init_SensorsStatusBaro_inconsistency(::px4_msgs::msg::SensorsStatusBaro & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusBaro_healthy inconsistency(::px4_msgs::msg::SensorsStatusBaro::_inconsistency_type arg)
  {
    msg_.inconsistency = std::move(arg);
    return Init_SensorsStatusBaro_healthy(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

class Init_SensorsStatusBaro_device_ids
{
public:
  explicit Init_SensorsStatusBaro_device_ids(::px4_msgs::msg::SensorsStatusBaro & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusBaro_inconsistency device_ids(::px4_msgs::msg::SensorsStatusBaro::_device_ids_type arg)
  {
    msg_.device_ids = std::move(arg);
    return Init_SensorsStatusBaro_inconsistency(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

class Init_SensorsStatusBaro_device_id_primary
{
public:
  explicit Init_SensorsStatusBaro_device_id_primary(::px4_msgs::msg::SensorsStatusBaro & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusBaro_device_ids device_id_primary(::px4_msgs::msg::SensorsStatusBaro::_device_id_primary_type arg)
  {
    msg_.device_id_primary = std::move(arg);
    return Init_SensorsStatusBaro_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

class Init_SensorsStatusBaro_timestamp
{
public:
  Init_SensorsStatusBaro_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorsStatusBaro_device_id_primary timestamp(::px4_msgs::msg::SensorsStatusBaro::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorsStatusBaro_device_id_primary(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusBaro msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorsStatusBaro>()
{
  return px4_msgs::msg::builder::Init_SensorsStatusBaro_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_BARO__BUILDER_HPP_
