// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/position_controller_landing_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/position_controller_landing_status__struct.h"
#include "px4_msgs/msg/detail/position_controller_landing_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PositionControllerLandingStatus__ros_msg_type = px4_msgs__msg__PositionControllerLandingStatus;

static bool _PositionControllerLandingStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionControllerLandingStatus__ros_msg_type * ros_message = static_cast<const _PositionControllerLandingStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: horizontal_slope_displacement
  {
    cdr << ros_message->horizontal_slope_displacement;
  }

  // Field name: slope_angle_rad
  {
    cdr << ros_message->slope_angle_rad;
  }

  // Field name: flare_length
  {
    cdr << ros_message->flare_length;
  }

  // Field name: abort_landing
  {
    cdr << (ros_message->abort_landing ? true : false);
  }

  return true;
}

static bool _PositionControllerLandingStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionControllerLandingStatus__ros_msg_type * ros_message = static_cast<_PositionControllerLandingStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: horizontal_slope_displacement
  {
    cdr >> ros_message->horizontal_slope_displacement;
  }

  // Field name: slope_angle_rad
  {
    cdr >> ros_message->slope_angle_rad;
  }

  // Field name: flare_length
  {
    cdr >> ros_message->flare_length;
  }

  // Field name: abort_landing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->abort_landing = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__PositionControllerLandingStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionControllerLandingStatus__ros_msg_type * ros_message = static_cast<const _PositionControllerLandingStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_slope_displacement
  {
    size_t item_size = sizeof(ros_message->horizontal_slope_displacement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slope_angle_rad
  {
    size_t item_size = sizeof(ros_message->slope_angle_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flare_length
  {
    size_t item_size = sizeof(ros_message->flare_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abort_landing
  {
    size_t item_size = sizeof(ros_message->abort_landing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PositionControllerLandingStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__PositionControllerLandingStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__PositionControllerLandingStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: horizontal_slope_displacement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: slope_angle_rad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flare_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: abort_landing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionControllerLandingStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__PositionControllerLandingStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionControllerLandingStatus = {
  "px4_msgs::msg",
  "PositionControllerLandingStatus",
  _PositionControllerLandingStatus__cdr_serialize,
  _PositionControllerLandingStatus__cdr_deserialize,
  _PositionControllerLandingStatus__get_serialized_size,
  _PositionControllerLandingStatus__max_serialized_size
};

static rosidl_message_type_support_t _PositionControllerLandingStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionControllerLandingStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, PositionControllerLandingStatus)() {
  return &_PositionControllerLandingStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
