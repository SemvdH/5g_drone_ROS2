// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorAttitude.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_attitude__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_attitude__struct.h"
#include "px4_msgs/msg/detail/estimator_attitude__functions.h"
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


using _EstimatorAttitude__ros_msg_type = px4_msgs__msg__EstimatorAttitude;

static bool _EstimatorAttitude__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorAttitude__ros_msg_type * ros_message = static_cast<const _EstimatorAttitude__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: q
  {
    size_t size = 4;
    auto array_ptr = ros_message->q;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: delta_q_reset
  {
    size_t size = 4;
    auto array_ptr = ros_message->delta_q_reset;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: quat_reset_counter
  {
    cdr << ros_message->quat_reset_counter;
  }

  return true;
}

static bool _EstimatorAttitude__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorAttitude__ros_msg_type * ros_message = static_cast<_EstimatorAttitude__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: q
  {
    size_t size = 4;
    auto array_ptr = ros_message->q;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: delta_q_reset
  {
    size_t size = 4;
    auto array_ptr = ros_message->delta_q_reset;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: quat_reset_counter
  {
    cdr >> ros_message->quat_reset_counter;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorAttitude(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorAttitude__ros_msg_type * ros_message = static_cast<const _EstimatorAttitude__ros_msg_type *>(untyped_ros_message);
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
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->q;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_q_reset
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->delta_q_reset;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quat_reset_counter
  {
    size_t item_size = sizeof(ros_message->quat_reset_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorAttitude__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorAttitude(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorAttitude(
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
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_q_reset
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quat_reset_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EstimatorAttitude__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EstimatorAttitude(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EstimatorAttitude = {
  "px4_msgs::msg",
  "EstimatorAttitude",
  _EstimatorAttitude__cdr_serialize,
  _EstimatorAttitude__cdr_deserialize,
  _EstimatorAttitude__get_serialized_size,
  _EstimatorAttitude__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorAttitude__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorAttitude,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorAttitude)() {
  return &_EstimatorAttitude__type_support;
}

#if defined(__cplusplus)
}
#endif
