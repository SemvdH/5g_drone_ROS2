// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vtol_vehicle_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vtol_vehicle_status__struct.h"
#include "px4_msgs/msg/detail/vtol_vehicle_status__functions.h"
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


using _VtolVehicleStatus__ros_msg_type = px4_msgs__msg__VtolVehicleStatus;

static bool _VtolVehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VtolVehicleStatus__ros_msg_type * ros_message = static_cast<const _VtolVehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: vtol_in_rw_mode
  {
    cdr << (ros_message->vtol_in_rw_mode ? true : false);
  }

  // Field name: vtol_in_trans_mode
  {
    cdr << (ros_message->vtol_in_trans_mode ? true : false);
  }

  // Field name: in_transition_to_fw
  {
    cdr << (ros_message->in_transition_to_fw ? true : false);
  }

  // Field name: vtol_transition_failsafe
  {
    cdr << (ros_message->vtol_transition_failsafe ? true : false);
  }

  // Field name: fw_permanent_stab
  {
    cdr << (ros_message->fw_permanent_stab ? true : false);
  }

  return true;
}

static bool _VtolVehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VtolVehicleStatus__ros_msg_type * ros_message = static_cast<_VtolVehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: vtol_in_rw_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_in_rw_mode = tmp ? true : false;
  }

  // Field name: vtol_in_trans_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_in_trans_mode = tmp ? true : false;
  }

  // Field name: in_transition_to_fw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_transition_to_fw = tmp ? true : false;
  }

  // Field name: vtol_transition_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_transition_failsafe = tmp ? true : false;
  }

  // Field name: fw_permanent_stab
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fw_permanent_stab = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VtolVehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VtolVehicleStatus__ros_msg_type * ros_message = static_cast<const _VtolVehicleStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name vtol_in_rw_mode
  {
    size_t item_size = sizeof(ros_message->vtol_in_rw_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_in_trans_mode
  {
    size_t item_size = sizeof(ros_message->vtol_in_trans_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_transition_to_fw
  {
    size_t item_size = sizeof(ros_message->in_transition_to_fw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_transition_failsafe
  {
    size_t item_size = sizeof(ros_message->vtol_transition_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fw_permanent_stab
  {
    size_t item_size = sizeof(ros_message->fw_permanent_stab);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VtolVehicleStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VtolVehicleStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VtolVehicleStatus(
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
  // member: vtol_in_rw_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_in_trans_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_transition_to_fw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_transition_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fw_permanent_stab
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VtolVehicleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__VtolVehicleStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VtolVehicleStatus = {
  "px4_msgs::msg",
  "VtolVehicleStatus",
  _VtolVehicleStatus__cdr_serialize,
  _VtolVehicleStatus__cdr_deserialize,
  _VtolVehicleStatus__get_serialized_size,
  _VtolVehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VtolVehicleStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VtolVehicleStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VtolVehicleStatus)() {
  return &_VtolVehicleStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
