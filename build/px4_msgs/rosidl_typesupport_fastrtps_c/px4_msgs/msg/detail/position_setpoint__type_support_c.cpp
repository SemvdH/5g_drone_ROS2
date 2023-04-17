// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/position_setpoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/position_setpoint__struct.h"
#include "px4_msgs/msg/detail/position_setpoint__functions.h"
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


using _PositionSetpoint__ros_msg_type = px4_msgs__msg__PositionSetpoint;

static bool _PositionSetpoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionSetpoint__ros_msg_type * ros_message = static_cast<const _PositionSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: valid
  {
    cdr << (ros_message->valid ? true : false);
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: vy
  {
    cdr << ros_message->vy;
  }

  // Field name: vz
  {
    cdr << ros_message->vz;
  }

  // Field name: velocity_valid
  {
    cdr << (ros_message->velocity_valid ? true : false);
  }

  // Field name: velocity_frame
  {
    cdr << ros_message->velocity_frame;
  }

  // Field name: alt_valid
  {
    cdr << (ros_message->alt_valid ? true : false);
  }

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: alt
  {
    cdr << ros_message->alt;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: yaw_valid
  {
    cdr << (ros_message->yaw_valid ? true : false);
  }

  // Field name: yawspeed
  {
    cdr << ros_message->yawspeed;
  }

  // Field name: yawspeed_valid
  {
    cdr << (ros_message->yawspeed_valid ? true : false);
  }

  // Field name: landing_gear
  {
    cdr << ros_message->landing_gear;
  }

  // Field name: loiter_radius
  {
    cdr << ros_message->loiter_radius;
  }

  // Field name: loiter_direction
  {
    cdr << ros_message->loiter_direction;
  }

  // Field name: acceptance_radius
  {
    cdr << ros_message->acceptance_radius;
  }

  // Field name: cruising_speed
  {
    cdr << ros_message->cruising_speed;
  }

  // Field name: cruising_throttle
  {
    cdr << ros_message->cruising_throttle;
  }

  // Field name: disable_weather_vane
  {
    cdr << (ros_message->disable_weather_vane ? true : false);
  }

  return true;
}

static bool _PositionSetpoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionSetpoint__ros_msg_type * ros_message = static_cast<_PositionSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid = tmp ? true : false;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: vx
  {
    cdr >> ros_message->vx;
  }

  // Field name: vy
  {
    cdr >> ros_message->vy;
  }

  // Field name: vz
  {
    cdr >> ros_message->vz;
  }

  // Field name: velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->velocity_valid = tmp ? true : false;
  }

  // Field name: velocity_frame
  {
    cdr >> ros_message->velocity_frame;
  }

  // Field name: alt_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alt_valid = tmp ? true : false;
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: alt
  {
    cdr >> ros_message->alt;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: yaw_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yaw_valid = tmp ? true : false;
  }

  // Field name: yawspeed
  {
    cdr >> ros_message->yawspeed;
  }

  // Field name: yawspeed_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yawspeed_valid = tmp ? true : false;
  }

  // Field name: landing_gear
  {
    cdr >> ros_message->landing_gear;
  }

  // Field name: loiter_radius
  {
    cdr >> ros_message->loiter_radius;
  }

  // Field name: loiter_direction
  {
    cdr >> ros_message->loiter_direction;
  }

  // Field name: acceptance_radius
  {
    cdr >> ros_message->acceptance_radius;
  }

  // Field name: cruising_speed
  {
    cdr >> ros_message->cruising_speed;
  }

  // Field name: cruising_throttle
  {
    cdr >> ros_message->cruising_throttle;
  }

  // Field name: disable_weather_vane
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_weather_vane = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__PositionSetpoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionSetpoint__ros_msg_type * ros_message = static_cast<const _PositionSetpoint__ros_msg_type *>(untyped_ros_message);
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
  // field.name valid
  {
    size_t item_size = sizeof(ros_message->valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy
  {
    size_t item_size = sizeof(ros_message->vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vz
  {
    size_t item_size = sizeof(ros_message->vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_valid
  {
    size_t item_size = sizeof(ros_message->velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_frame
  {
    size_t item_size = sizeof(ros_message->velocity_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alt_valid
  {
    size_t item_size = sizeof(ros_message->alt_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alt
  {
    size_t item_size = sizeof(ros_message->alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_valid
  {
    size_t item_size = sizeof(ros_message->yaw_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yawspeed
  {
    size_t item_size = sizeof(ros_message->yawspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yawspeed_valid
  {
    size_t item_size = sizeof(ros_message->yawspeed_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name landing_gear
  {
    size_t item_size = sizeof(ros_message->landing_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loiter_radius
  {
    size_t item_size = sizeof(ros_message->loiter_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loiter_direction
  {
    size_t item_size = sizeof(ros_message->loiter_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceptance_radius
  {
    size_t item_size = sizeof(ros_message->acceptance_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cruising_speed
  {
    size_t item_size = sizeof(ros_message->cruising_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cruising_throttle
  {
    size_t item_size = sizeof(ros_message->cruising_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disable_weather_vane
  {
    size_t item_size = sizeof(ros_message->disable_weather_vane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PositionSetpoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__PositionSetpoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__PositionSetpoint(
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
  // member: valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity_frame
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alt_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yawspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yawspeed_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: landing_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: loiter_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: loiter_direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acceptance_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cruising_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cruising_throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: disable_weather_vane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionSetpoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__PositionSetpoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionSetpoint = {
  "px4_msgs::msg",
  "PositionSetpoint",
  _PositionSetpoint__cdr_serialize,
  _PositionSetpoint__cdr_deserialize,
  _PositionSetpoint__get_serialized_size,
  _PositionSetpoint__max_serialized_size
};

static rosidl_message_type_support_t _PositionSetpoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionSetpoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, PositionSetpoint)() {
  return &_PositionSetpoint__type_support;
}

#if defined(__cplusplus)
}
#endif
