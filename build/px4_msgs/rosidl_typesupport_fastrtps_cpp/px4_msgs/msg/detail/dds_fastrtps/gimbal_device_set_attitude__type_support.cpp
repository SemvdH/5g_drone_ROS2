// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/GimbalDeviceSetAttitude.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_device_set_attitude__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/gimbal_device_set_attitude__struct.hpp"

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
  const px4_msgs::msg::GimbalDeviceSetAttitude & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: target_system
  cdr << ros_message.target_system;
  // Member: target_component
  cdr << ros_message.target_component;
  // Member: flags
  cdr << ros_message.flags;
  // Member: q
  {
    cdr << ros_message.q;
  }
  // Member: angular_velocity_x
  cdr << ros_message.angular_velocity_x;
  // Member: angular_velocity_y
  cdr << ros_message.angular_velocity_y;
  // Member: angular_velocity_z
  cdr << ros_message.angular_velocity_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::GimbalDeviceSetAttitude & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: target_system
  cdr >> ros_message.target_system;

  // Member: target_component
  cdr >> ros_message.target_component;

  // Member: flags
  cdr >> ros_message.flags;

  // Member: q
  {
    cdr >> ros_message.q;
  }

  // Member: angular_velocity_x
  cdr >> ros_message.angular_velocity_x;

  // Member: angular_velocity_y
  cdr >> ros_message.angular_velocity_y;

  // Member: angular_velocity_z
  cdr >> ros_message.angular_velocity_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::GimbalDeviceSetAttitude & ros_message,
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
  // Member: target_system
  {
    size_t item_size = sizeof(ros_message.target_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_component
  {
    size_t item_size = sizeof(ros_message.target_component);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flags
  {
    size_t item_size = sizeof(ros_message.flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.q[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_velocity_x
  {
    size_t item_size = sizeof(ros_message.angular_velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_velocity_y
  {
    size_t item_size = sizeof(ros_message.angular_velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_velocity_z
  {
    size_t item_size = sizeof(ros_message.angular_velocity_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_GimbalDeviceSetAttitude(
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

  // Member: target_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_component
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: q
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angular_velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angular_velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angular_velocity_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GimbalDeviceSetAttitude__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::GimbalDeviceSetAttitude *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GimbalDeviceSetAttitude__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::GimbalDeviceSetAttitude *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GimbalDeviceSetAttitude__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::GimbalDeviceSetAttitude *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GimbalDeviceSetAttitude__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GimbalDeviceSetAttitude(full_bounded, 0);
}

static message_type_support_callbacks_t _GimbalDeviceSetAttitude__callbacks = {
  "px4_msgs::msg",
  "GimbalDeviceSetAttitude",
  _GimbalDeviceSetAttitude__cdr_serialize,
  _GimbalDeviceSetAttitude__cdr_deserialize,
  _GimbalDeviceSetAttitude__get_serialized_size,
  _GimbalDeviceSetAttitude__max_serialized_size
};

static rosidl_message_type_support_t _GimbalDeviceSetAttitude__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GimbalDeviceSetAttitude__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::GimbalDeviceSetAttitude>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_GimbalDeviceSetAttitude__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, GimbalDeviceSetAttitude)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_GimbalDeviceSetAttitude__handle;
}

#ifdef __cplusplus
}
#endif
