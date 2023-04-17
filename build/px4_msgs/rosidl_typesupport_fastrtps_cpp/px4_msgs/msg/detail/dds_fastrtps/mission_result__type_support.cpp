// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/mission_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/mission_result__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::MissionResult & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: instance_count
  cdr << ros_message.instance_count;
  // Member: seq_reached
  cdr << ros_message.seq_reached;
  // Member: seq_current
  cdr << ros_message.seq_current;
  // Member: seq_total
  cdr << ros_message.seq_total;
  // Member: valid
  cdr << (ros_message.valid ? true : false);
  // Member: warning
  cdr << (ros_message.warning ? true : false);
  // Member: finished
  cdr << (ros_message.finished ? true : false);
  // Member: failure
  cdr << (ros_message.failure ? true : false);
  // Member: stay_in_failsafe
  cdr << (ros_message.stay_in_failsafe ? true : false);
  // Member: flight_termination
  cdr << (ros_message.flight_termination ? true : false);
  // Member: item_do_jump_changed
  cdr << (ros_message.item_do_jump_changed ? true : false);
  // Member: item_changed_index
  cdr << ros_message.item_changed_index;
  // Member: item_do_jump_remaining
  cdr << ros_message.item_do_jump_remaining;
  // Member: execution_mode
  cdr << ros_message.execution_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::MissionResult & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: instance_count
  cdr >> ros_message.instance_count;

  // Member: seq_reached
  cdr >> ros_message.seq_reached;

  // Member: seq_current
  cdr >> ros_message.seq_current;

  // Member: seq_total
  cdr >> ros_message.seq_total;

  // Member: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.valid = tmp ? true : false;
  }

  // Member: warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.warning = tmp ? true : false;
  }

  // Member: finished
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.finished = tmp ? true : false;
  }

  // Member: failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.failure = tmp ? true : false;
  }

  // Member: stay_in_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stay_in_failsafe = tmp ? true : false;
  }

  // Member: flight_termination
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flight_termination = tmp ? true : false;
  }

  // Member: item_do_jump_changed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.item_do_jump_changed = tmp ? true : false;
  }

  // Member: item_changed_index
  cdr >> ros_message.item_changed_index;

  // Member: item_do_jump_remaining
  cdr >> ros_message.item_do_jump_remaining;

  // Member: execution_mode
  cdr >> ros_message.execution_mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::MissionResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: instance_count
  {
    size_t item_size = sizeof(ros_message.instance_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seq_reached
  {
    size_t item_size = sizeof(ros_message.seq_reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seq_current
  {
    size_t item_size = sizeof(ros_message.seq_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: seq_total
  {
    size_t item_size = sizeof(ros_message.seq_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid
  {
    size_t item_size = sizeof(ros_message.valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: warning
  {
    size_t item_size = sizeof(ros_message.warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: finished
  {
    size_t item_size = sizeof(ros_message.finished);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failure
  {
    size_t item_size = sizeof(ros_message.failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stay_in_failsafe
  {
    size_t item_size = sizeof(ros_message.stay_in_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flight_termination
  {
    size_t item_size = sizeof(ros_message.flight_termination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: item_do_jump_changed
  {
    size_t item_size = sizeof(ros_message.item_do_jump_changed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: item_changed_index
  {
    size_t item_size = sizeof(ros_message.item_changed_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: item_do_jump_remaining
  {
    size_t item_size = sizeof(ros_message.item_do_jump_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: execution_mode
  {
    size_t item_size = sizeof(ros_message.execution_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_MissionResult(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: instance_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: seq_reached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: seq_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: seq_total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: warning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: finished
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stay_in_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flight_termination
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: item_do_jump_changed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: item_changed_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: item_do_jump_remaining
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: execution_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MissionResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::MissionResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MissionResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::MissionResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MissionResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::MissionResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MissionResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MissionResult(full_bounded, 0);
}

static message_type_support_callbacks_t _MissionResult__callbacks = {
  "px4_msgs::msg",
  "MissionResult",
  _MissionResult__cdr_serialize,
  _MissionResult__cdr_deserialize,
  _MissionResult__get_serialized_size,
  _MissionResult__max_serialized_size
};

static rosidl_message_type_support_t _MissionResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MissionResult__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::MissionResult>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_MissionResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, MissionResult)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_MissionResult__handle;
}

#ifdef __cplusplus
}
#endif
