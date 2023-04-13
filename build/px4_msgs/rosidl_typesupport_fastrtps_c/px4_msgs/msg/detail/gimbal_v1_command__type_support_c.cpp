// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/GimbalV1Command.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_v1_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/gimbal_v1_command__struct.h"
#include "px4_msgs/msg/detail/gimbal_v1_command__functions.h"
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


using _GimbalV1Command__ros_msg_type = px4_msgs__msg__GimbalV1Command;

static bool _GimbalV1Command__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GimbalV1Command__ros_msg_type * ros_message = static_cast<const _GimbalV1Command__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: param1
  {
    cdr << ros_message->param1;
  }

  // Field name: param2
  {
    cdr << ros_message->param2;
  }

  // Field name: param3
  {
    cdr << ros_message->param3;
  }

  // Field name: param4
  {
    cdr << ros_message->param4;
  }

  // Field name: param5
  {
    cdr << ros_message->param5;
  }

  // Field name: param6
  {
    cdr << ros_message->param6;
  }

  // Field name: param7
  {
    cdr << ros_message->param7;
  }

  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: target_system
  {
    cdr << ros_message->target_system;
  }

  // Field name: target_component
  {
    cdr << ros_message->target_component;
  }

  // Field name: source_system
  {
    cdr << ros_message->source_system;
  }

  // Field name: source_component
  {
    cdr << ros_message->source_component;
  }

  // Field name: confirmation
  {
    cdr << ros_message->confirmation;
  }

  // Field name: from_external
  {
    cdr << (ros_message->from_external ? true : false);
  }

  return true;
}

static bool _GimbalV1Command__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GimbalV1Command__ros_msg_type * ros_message = static_cast<_GimbalV1Command__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: param1
  {
    cdr >> ros_message->param1;
  }

  // Field name: param2
  {
    cdr >> ros_message->param2;
  }

  // Field name: param3
  {
    cdr >> ros_message->param3;
  }

  // Field name: param4
  {
    cdr >> ros_message->param4;
  }

  // Field name: param5
  {
    cdr >> ros_message->param5;
  }

  // Field name: param6
  {
    cdr >> ros_message->param6;
  }

  // Field name: param7
  {
    cdr >> ros_message->param7;
  }

  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: target_system
  {
    cdr >> ros_message->target_system;
  }

  // Field name: target_component
  {
    cdr >> ros_message->target_component;
  }

  // Field name: source_system
  {
    cdr >> ros_message->source_system;
  }

  // Field name: source_component
  {
    cdr >> ros_message->source_component;
  }

  // Field name: confirmation
  {
    cdr >> ros_message->confirmation;
  }

  // Field name: from_external
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->from_external = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__GimbalV1Command(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GimbalV1Command__ros_msg_type * ros_message = static_cast<const _GimbalV1Command__ros_msg_type *>(untyped_ros_message);
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
  // field.name param1
  {
    size_t item_size = sizeof(ros_message->param1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param2
  {
    size_t item_size = sizeof(ros_message->param2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param3
  {
    size_t item_size = sizeof(ros_message->param3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param4
  {
    size_t item_size = sizeof(ros_message->param4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param5
  {
    size_t item_size = sizeof(ros_message->param5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param6
  {
    size_t item_size = sizeof(ros_message->param6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param7
  {
    size_t item_size = sizeof(ros_message->param7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_system
  {
    size_t item_size = sizeof(ros_message->target_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_component
  {
    size_t item_size = sizeof(ros_message->target_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name source_system
  {
    size_t item_size = sizeof(ros_message->source_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name source_component
  {
    size_t item_size = sizeof(ros_message->source_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confirmation
  {
    size_t item_size = sizeof(ros_message->confirmation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name from_external
  {
    size_t item_size = sizeof(ros_message->from_external);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GimbalV1Command__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__GimbalV1Command(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__GimbalV1Command(
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
  // member: param1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: param2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: param3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: param4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: param5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: param6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: param7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: source_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: source_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: confirmation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: from_external
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GimbalV1Command__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__GimbalV1Command(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GimbalV1Command = {
  "px4_msgs::msg",
  "GimbalV1Command",
  _GimbalV1Command__cdr_serialize,
  _GimbalV1Command__cdr_deserialize,
  _GimbalV1Command__get_serialized_size,
  _GimbalV1Command__max_serialized_size
};

static rosidl_message_type_support_t _GimbalV1Command__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GimbalV1Command,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, GimbalV1Command)() {
  return &_GimbalV1Command__type_support;
}

#if defined(__cplusplus)
}
#endif
