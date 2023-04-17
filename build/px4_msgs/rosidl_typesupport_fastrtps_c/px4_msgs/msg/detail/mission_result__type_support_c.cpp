// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/mission_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/mission_result__struct.h"
#include "px4_msgs/msg/detail/mission_result__functions.h"
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


using _MissionResult__ros_msg_type = px4_msgs__msg__MissionResult;

static bool _MissionResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionResult__ros_msg_type * ros_message = static_cast<const _MissionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: instance_count
  {
    cdr << ros_message->instance_count;
  }

  // Field name: seq_reached
  {
    cdr << ros_message->seq_reached;
  }

  // Field name: seq_current
  {
    cdr << ros_message->seq_current;
  }

  // Field name: seq_total
  {
    cdr << ros_message->seq_total;
  }

  // Field name: valid
  {
    cdr << (ros_message->valid ? true : false);
  }

  // Field name: warning
  {
    cdr << (ros_message->warning ? true : false);
  }

  // Field name: finished
  {
    cdr << (ros_message->finished ? true : false);
  }

  // Field name: failure
  {
    cdr << (ros_message->failure ? true : false);
  }

  // Field name: stay_in_failsafe
  {
    cdr << (ros_message->stay_in_failsafe ? true : false);
  }

  // Field name: flight_termination
  {
    cdr << (ros_message->flight_termination ? true : false);
  }

  // Field name: item_do_jump_changed
  {
    cdr << (ros_message->item_do_jump_changed ? true : false);
  }

  // Field name: item_changed_index
  {
    cdr << ros_message->item_changed_index;
  }

  // Field name: item_do_jump_remaining
  {
    cdr << ros_message->item_do_jump_remaining;
  }

  // Field name: execution_mode
  {
    cdr << ros_message->execution_mode;
  }

  return true;
}

static bool _MissionResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionResult__ros_msg_type * ros_message = static_cast<_MissionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: instance_count
  {
    cdr >> ros_message->instance_count;
  }

  // Field name: seq_reached
  {
    cdr >> ros_message->seq_reached;
  }

  // Field name: seq_current
  {
    cdr >> ros_message->seq_current;
  }

  // Field name: seq_total
  {
    cdr >> ros_message->seq_total;
  }

  // Field name: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid = tmp ? true : false;
  }

  // Field name: warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->warning = tmp ? true : false;
  }

  // Field name: finished
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->finished = tmp ? true : false;
  }

  // Field name: failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->failure = tmp ? true : false;
  }

  // Field name: stay_in_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stay_in_failsafe = tmp ? true : false;
  }

  // Field name: flight_termination
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flight_termination = tmp ? true : false;
  }

  // Field name: item_do_jump_changed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->item_do_jump_changed = tmp ? true : false;
  }

  // Field name: item_changed_index
  {
    cdr >> ros_message->item_changed_index;
  }

  // Field name: item_do_jump_remaining
  {
    cdr >> ros_message->item_do_jump_remaining;
  }

  // Field name: execution_mode
  {
    cdr >> ros_message->execution_mode;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__MissionResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionResult__ros_msg_type * ros_message = static_cast<const _MissionResult__ros_msg_type *>(untyped_ros_message);
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
  // field.name instance_count
  {
    size_t item_size = sizeof(ros_message->instance_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seq_reached
  {
    size_t item_size = sizeof(ros_message->seq_reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seq_current
  {
    size_t item_size = sizeof(ros_message->seq_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name seq_total
  {
    size_t item_size = sizeof(ros_message->seq_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid
  {
    size_t item_size = sizeof(ros_message->valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name warning
  {
    size_t item_size = sizeof(ros_message->warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name finished
  {
    size_t item_size = sizeof(ros_message->finished);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failure
  {
    size_t item_size = sizeof(ros_message->failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stay_in_failsafe
  {
    size_t item_size = sizeof(ros_message->stay_in_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flight_termination
  {
    size_t item_size = sizeof(ros_message->flight_termination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name item_do_jump_changed
  {
    size_t item_size = sizeof(ros_message->item_do_jump_changed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name item_changed_index
  {
    size_t item_size = sizeof(ros_message->item_changed_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name item_do_jump_remaining
  {
    size_t item_size = sizeof(ros_message->item_do_jump_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name execution_mode
  {
    size_t item_size = sizeof(ros_message->execution_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MissionResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__MissionResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__MissionResult(
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
  // member: instance_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seq_reached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: seq_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: seq_total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: finished
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stay_in_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flight_termination
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: item_do_jump_changed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: item_changed_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: item_do_jump_remaining
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: execution_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MissionResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__MissionResult(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MissionResult = {
  "px4_msgs::msg",
  "MissionResult",
  _MissionResult__cdr_serialize,
  _MissionResult__cdr_deserialize,
  _MissionResult__get_serialized_size,
  _MissionResult__max_serialized_size
};

static rosidl_message_type_support_t _MissionResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, MissionResult)() {
  return &_MissionResult__type_support;
}

#if defined(__cplusplus)
}
#endif
