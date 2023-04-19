// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice

#ifndef BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "beacon_positioning/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "beacon_positioning/msg/detail/tracker_position__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace beacon_positioning
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beacon_positioning
cdr_serialize(
  const beacon_positioning::msg::TrackerPosition & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beacon_positioning
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  beacon_positioning::msg::TrackerPosition & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beacon_positioning
get_serialized_size(
  const beacon_positioning::msg::TrackerPosition & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beacon_positioning
max_serialized_size_TrackerPosition(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace beacon_positioning

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beacon_positioning
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beacon_positioning, msg, TrackerPosition)();

#ifdef __cplusplus
}
#endif

#endif  // BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
