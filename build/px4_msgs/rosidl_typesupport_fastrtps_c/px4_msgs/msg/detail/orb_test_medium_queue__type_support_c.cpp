// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/OrbTestMediumQueue.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/orb_test_medium_queue__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/orb_test_medium_queue__struct.h"
#include "px4_msgs/msg/detail/orb_test_medium_queue__functions.h"
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


using _OrbTestMediumQueue__ros_msg_type = px4_msgs__msg__OrbTestMediumQueue;

static bool _OrbTestMediumQueue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OrbTestMediumQueue__ros_msg_type * ros_message = static_cast<const _OrbTestMediumQueue__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: val
  {
    cdr << ros_message->val;
  }

  // Field name: junk
  {
    size_t size = 64;
    auto array_ptr = ros_message->junk;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _OrbTestMediumQueue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OrbTestMediumQueue__ros_msg_type * ros_message = static_cast<_OrbTestMediumQueue__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: val
  {
    cdr >> ros_message->val;
  }

  // Field name: junk
  {
    size_t size = 64;
    auto array_ptr = ros_message->junk;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__OrbTestMediumQueue(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OrbTestMediumQueue__ros_msg_type * ros_message = static_cast<const _OrbTestMediumQueue__ros_msg_type *>(untyped_ros_message);
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
  // field.name val
  {
    size_t item_size = sizeof(ros_message->val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name junk
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->junk;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OrbTestMediumQueue__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__OrbTestMediumQueue(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__OrbTestMediumQueue(
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
  // member: val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: junk
  {
    size_t array_size = 64;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OrbTestMediumQueue__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__OrbTestMediumQueue(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OrbTestMediumQueue = {
  "px4_msgs::msg",
  "OrbTestMediumQueue",
  _OrbTestMediumQueue__cdr_serialize,
  _OrbTestMediumQueue__cdr_deserialize,
  _OrbTestMediumQueue__get_serialized_size,
  _OrbTestMediumQueue__max_serialized_size
};

static rosidl_message_type_support_t _OrbTestMediumQueue__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OrbTestMediumQueue,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, OrbTestMediumQueue)() {
  return &_OrbTestMediumQueue__type_support;
}

#if defined(__cplusplus)
}
#endif
