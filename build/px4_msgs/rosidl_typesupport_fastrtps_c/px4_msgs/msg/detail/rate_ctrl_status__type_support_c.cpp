// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rate_ctrl_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/rate_ctrl_status__struct.h"
#include "px4_msgs/msg/detail/rate_ctrl_status__functions.h"
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


using _RateCtrlStatus__ros_msg_type = px4_msgs__msg__RateCtrlStatus;

static bool _RateCtrlStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RateCtrlStatus__ros_msg_type * ros_message = static_cast<const _RateCtrlStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: rollspeed_integ
  {
    cdr << ros_message->rollspeed_integ;
  }

  // Field name: pitchspeed_integ
  {
    cdr << ros_message->pitchspeed_integ;
  }

  // Field name: yawspeed_integ
  {
    cdr << ros_message->yawspeed_integ;
  }

  // Field name: additional_integ1
  {
    cdr << ros_message->additional_integ1;
  }

  return true;
}

static bool _RateCtrlStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RateCtrlStatus__ros_msg_type * ros_message = static_cast<_RateCtrlStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: rollspeed_integ
  {
    cdr >> ros_message->rollspeed_integ;
  }

  // Field name: pitchspeed_integ
  {
    cdr >> ros_message->pitchspeed_integ;
  }

  // Field name: yawspeed_integ
  {
    cdr >> ros_message->yawspeed_integ;
  }

  // Field name: additional_integ1
  {
    cdr >> ros_message->additional_integ1;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__RateCtrlStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RateCtrlStatus__ros_msg_type * ros_message = static_cast<const _RateCtrlStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name rollspeed_integ
  {
    size_t item_size = sizeof(ros_message->rollspeed_integ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitchspeed_integ
  {
    size_t item_size = sizeof(ros_message->pitchspeed_integ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yawspeed_integ
  {
    size_t item_size = sizeof(ros_message->yawspeed_integ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name additional_integ1
  {
    size_t item_size = sizeof(ros_message->additional_integ1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RateCtrlStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__RateCtrlStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__RateCtrlStatus(
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
  // member: rollspeed_integ
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitchspeed_integ
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yawspeed_integ
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: additional_integ1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RateCtrlStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__RateCtrlStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RateCtrlStatus = {
  "px4_msgs::msg",
  "RateCtrlStatus",
  _RateCtrlStatus__cdr_serialize,
  _RateCtrlStatus__cdr_deserialize,
  _RateCtrlStatus__get_serialized_size,
  _RateCtrlStatus__max_serialized_size
};

static rosidl_message_type_support_t _RateCtrlStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RateCtrlStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, RateCtrlStatus)() {
  return &_RateCtrlStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
