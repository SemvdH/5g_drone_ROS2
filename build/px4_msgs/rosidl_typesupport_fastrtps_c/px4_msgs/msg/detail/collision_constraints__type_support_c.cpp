// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/CollisionConstraints.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/collision_constraints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/collision_constraints__struct.h"
#include "px4_msgs/msg/detail/collision_constraints__functions.h"
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


using _CollisionConstraints__ros_msg_type = px4_msgs__msg__CollisionConstraints;

static bool _CollisionConstraints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CollisionConstraints__ros_msg_type * ros_message = static_cast<const _CollisionConstraints__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: original_setpoint
  {
    size_t size = 2;
    auto array_ptr = ros_message->original_setpoint;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: adapted_setpoint
  {
    size_t size = 2;
    auto array_ptr = ros_message->adapted_setpoint;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CollisionConstraints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CollisionConstraints__ros_msg_type * ros_message = static_cast<_CollisionConstraints__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: original_setpoint
  {
    size_t size = 2;
    auto array_ptr = ros_message->original_setpoint;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: adapted_setpoint
  {
    size_t size = 2;
    auto array_ptr = ros_message->adapted_setpoint;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__CollisionConstraints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CollisionConstraints__ros_msg_type * ros_message = static_cast<const _CollisionConstraints__ros_msg_type *>(untyped_ros_message);
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
  // field.name original_setpoint
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->original_setpoint;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adapted_setpoint
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->adapted_setpoint;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CollisionConstraints__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__CollisionConstraints(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__CollisionConstraints(
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
  // member: original_setpoint
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: adapted_setpoint
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CollisionConstraints__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__CollisionConstraints(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CollisionConstraints = {
  "px4_msgs::msg",
  "CollisionConstraints",
  _CollisionConstraints__cdr_serialize,
  _CollisionConstraints__cdr_deserialize,
  _CollisionConstraints__get_serialized_size,
  _CollisionConstraints__max_serialized_size
};

static rosidl_message_type_support_t _CollisionConstraints__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CollisionConstraints,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, CollisionConstraints)() {
  return &_CollisionConstraints__type_support;
}

#if defined(__cplusplus)
}
#endif
