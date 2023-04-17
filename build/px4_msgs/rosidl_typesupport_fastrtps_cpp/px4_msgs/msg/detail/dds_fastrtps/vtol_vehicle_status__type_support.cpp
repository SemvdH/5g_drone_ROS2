// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vtol_vehicle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vtol_vehicle_status__struct.hpp"

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
  const px4_msgs::msg::VtolVehicleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: vtol_in_rw_mode
  cdr << (ros_message.vtol_in_rw_mode ? true : false);
  // Member: vtol_in_trans_mode
  cdr << (ros_message.vtol_in_trans_mode ? true : false);
  // Member: in_transition_to_fw
  cdr << (ros_message.in_transition_to_fw ? true : false);
  // Member: vtol_transition_failsafe
  cdr << (ros_message.vtol_transition_failsafe ? true : false);
  // Member: fw_permanent_stab
  cdr << (ros_message.fw_permanent_stab ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VtolVehicleStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: vtol_in_rw_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_in_rw_mode = tmp ? true : false;
  }

  // Member: vtol_in_trans_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_in_trans_mode = tmp ? true : false;
  }

  // Member: in_transition_to_fw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_transition_to_fw = tmp ? true : false;
  }

  // Member: vtol_transition_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_transition_failsafe = tmp ? true : false;
  }

  // Member: fw_permanent_stab
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fw_permanent_stab = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VtolVehicleStatus & ros_message,
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
  // Member: vtol_in_rw_mode
  {
    size_t item_size = sizeof(ros_message.vtol_in_rw_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtol_in_trans_mode
  {
    size_t item_size = sizeof(ros_message.vtol_in_trans_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_transition_to_fw
  {
    size_t item_size = sizeof(ros_message.in_transition_to_fw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtol_transition_failsafe
  {
    size_t item_size = sizeof(ros_message.vtol_transition_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fw_permanent_stab
  {
    size_t item_size = sizeof(ros_message.fw_permanent_stab);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VtolVehicleStatus(
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

  // Member: vtol_in_rw_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtol_in_trans_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_transition_to_fw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtol_transition_failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fw_permanent_stab
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VtolVehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VtolVehicleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VtolVehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VtolVehicleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VtolVehicleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VtolVehicleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VtolVehicleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VtolVehicleStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _VtolVehicleStatus__callbacks = {
  "px4_msgs::msg",
  "VtolVehicleStatus",
  _VtolVehicleStatus__cdr_serialize,
  _VtolVehicleStatus__cdr_deserialize,
  _VtolVehicleStatus__get_serialized_size,
  _VtolVehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VtolVehicleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VtolVehicleStatus__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::VtolVehicleStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VtolVehicleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VtolVehicleStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VtolVehicleStatus__handle;
}

#ifdef __cplusplus
}
#endif
