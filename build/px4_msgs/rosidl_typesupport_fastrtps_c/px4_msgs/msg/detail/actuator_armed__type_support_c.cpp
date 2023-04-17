// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/ActuatorArmed.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/actuator_armed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/actuator_armed__struct.h"
#include "px4_msgs/msg/detail/actuator_armed__functions.h"
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


using _ActuatorArmed__ros_msg_type = px4_msgs__msg__ActuatorArmed;

static bool _ActuatorArmed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActuatorArmed__ros_msg_type * ros_message = static_cast<const _ActuatorArmed__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: armed
  {
    cdr << (ros_message->armed ? true : false);
  }

  // Field name: prearmed
  {
    cdr << (ros_message->prearmed ? true : false);
  }

  // Field name: ready_to_arm
  {
    cdr << (ros_message->ready_to_arm ? true : false);
  }

  // Field name: lockdown
  {
    cdr << (ros_message->lockdown ? true : false);
  }

  // Field name: manual_lockdown
  {
    cdr << (ros_message->manual_lockdown ? true : false);
  }

  // Field name: force_failsafe
  {
    cdr << (ros_message->force_failsafe ? true : false);
  }

  // Field name: in_esc_calibration_mode
  {
    cdr << (ros_message->in_esc_calibration_mode ? true : false);
  }

  // Field name: soft_stop
  {
    cdr << (ros_message->soft_stop ? true : false);
  }

  return true;
}

static bool _ActuatorArmed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActuatorArmed__ros_msg_type * ros_message = static_cast<_ActuatorArmed__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->armed = tmp ? true : false;
  }

  // Field name: prearmed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->prearmed = tmp ? true : false;
  }

  // Field name: ready_to_arm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ready_to_arm = tmp ? true : false;
  }

  // Field name: lockdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lockdown = tmp ? true : false;
  }

  // Field name: manual_lockdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->manual_lockdown = tmp ? true : false;
  }

  // Field name: force_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->force_failsafe = tmp ? true : false;
  }

  // Field name: in_esc_calibration_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_esc_calibration_mode = tmp ? true : false;
  }

  // Field name: soft_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->soft_stop = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__ActuatorArmed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActuatorArmed__ros_msg_type * ros_message = static_cast<const _ActuatorArmed__ros_msg_type *>(untyped_ros_message);
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
  // field.name armed
  {
    size_t item_size = sizeof(ros_message->armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prearmed
  {
    size_t item_size = sizeof(ros_message->prearmed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ready_to_arm
  {
    size_t item_size = sizeof(ros_message->ready_to_arm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lockdown
  {
    size_t item_size = sizeof(ros_message->lockdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_lockdown
  {
    size_t item_size = sizeof(ros_message->manual_lockdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_failsafe
  {
    size_t item_size = sizeof(ros_message->force_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_esc_calibration_mode
  {
    size_t item_size = sizeof(ros_message->in_esc_calibration_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name soft_stop
  {
    size_t item_size = sizeof(ros_message->soft_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActuatorArmed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__ActuatorArmed(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__ActuatorArmed(
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
  // member: armed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prearmed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ready_to_arm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lockdown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: manual_lockdown
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: force_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_esc_calibration_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: soft_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ActuatorArmed__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__ActuatorArmed(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActuatorArmed = {
  "px4_msgs::msg",
  "ActuatorArmed",
  _ActuatorArmed__cdr_serialize,
  _ActuatorArmed__cdr_deserialize,
  _ActuatorArmed__get_serialized_size,
  _ActuatorArmed__max_serialized_size
};

static rosidl_message_type_support_t _ActuatorArmed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActuatorArmed,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, ActuatorArmed)() {
  return &_ActuatorArmed__type_support;
}

#if defined(__cplusplus)
}
#endif
