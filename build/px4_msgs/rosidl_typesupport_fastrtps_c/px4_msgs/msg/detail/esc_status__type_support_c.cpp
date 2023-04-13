// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EscStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/esc_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/esc_status__struct.h"
#include "px4_msgs/msg/detail/esc_status__functions.h"
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

#include "px4_msgs/msg/detail/esc_report__functions.h"  // esc

// forward declare type support functions
size_t get_serialized_size_px4_msgs__msg__EscReport(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_px4_msgs__msg__EscReport(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EscReport)();


using _EscStatus__ros_msg_type = px4_msgs__msg__EscStatus;

static bool _EscStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EscStatus__ros_msg_type * ros_message = static_cast<const _EscStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  // Field name: esc_count
  {
    cdr << ros_message->esc_count;
  }

  // Field name: esc_connectiontype
  {
    cdr << ros_message->esc_connectiontype;
  }

  // Field name: esc_online_flags
  {
    cdr << ros_message->esc_online_flags;
  }

  // Field name: esc_armed_flags
  {
    cdr << ros_message->esc_armed_flags;
  }

  // Field name: esc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, px4_msgs, msg, EscReport
      )()->data);
    size_t size = 8;
    auto array_ptr = ros_message->esc;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _EscStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EscStatus__ros_msg_type * ros_message = static_cast<_EscStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  // Field name: esc_count
  {
    cdr >> ros_message->esc_count;
  }

  // Field name: esc_connectiontype
  {
    cdr >> ros_message->esc_connectiontype;
  }

  // Field name: esc_online_flags
  {
    cdr >> ros_message->esc_online_flags;
  }

  // Field name: esc_armed_flags
  {
    cdr >> ros_message->esc_armed_flags;
  }

  // Field name: esc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, px4_msgs, msg, EscReport
      )()->data);
    size_t size = 8;
    auto array_ptr = ros_message->esc;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EscStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EscStatus__ros_msg_type * ros_message = static_cast<const _EscStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_count
  {
    size_t item_size = sizeof(ros_message->esc_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_connectiontype
  {
    size_t item_size = sizeof(ros_message->esc_connectiontype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_online_flags
  {
    size_t item_size = sizeof(ros_message->esc_online_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_armed_flags
  {
    size_t item_size = sizeof(ros_message->esc_armed_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->esc;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_px4_msgs__msg__EscReport(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EscStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EscStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EscStatus(
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
  // member: counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: esc_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_connectiontype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_online_flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_armed_flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc
  {
    size_t array_size = 8;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_px4_msgs__msg__EscReport(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _EscStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EscStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EscStatus = {
  "px4_msgs::msg",
  "EscStatus",
  _EscStatus__cdr_serialize,
  _EscStatus__cdr_deserialize,
  _EscStatus__get_serialized_size,
  _EscStatus__max_serialized_size
};

static rosidl_message_type_support_t _EscStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EscStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EscStatus)() {
  return &_EscStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
