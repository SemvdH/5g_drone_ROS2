// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/optical_flow__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/optical_flow__struct.h"
#include "px4_msgs/msg/detail/optical_flow__functions.h"
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


using _OpticalFlow__ros_msg_type = px4_msgs__msg__OpticalFlow;

static bool _OpticalFlow__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpticalFlow__ros_msg_type * ros_message = static_cast<const _OpticalFlow__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: sensor_id
  {
    cdr << ros_message->sensor_id;
  }

  // Field name: pixel_flow_x_integral
  {
    cdr << ros_message->pixel_flow_x_integral;
  }

  // Field name: pixel_flow_y_integral
  {
    cdr << ros_message->pixel_flow_y_integral;
  }

  // Field name: gyro_x_rate_integral
  {
    cdr << ros_message->gyro_x_rate_integral;
  }

  // Field name: gyro_y_rate_integral
  {
    cdr << ros_message->gyro_y_rate_integral;
  }

  // Field name: gyro_z_rate_integral
  {
    cdr << ros_message->gyro_z_rate_integral;
  }

  // Field name: ground_distance_m
  {
    cdr << ros_message->ground_distance_m;
  }

  // Field name: integration_timespan
  {
    cdr << ros_message->integration_timespan;
  }

  // Field name: time_since_last_sonar_update
  {
    cdr << ros_message->time_since_last_sonar_update;
  }

  // Field name: frame_count_since_last_readout
  {
    cdr << ros_message->frame_count_since_last_readout;
  }

  // Field name: gyro_temperature
  {
    cdr << ros_message->gyro_temperature;
  }

  // Field name: quality
  {
    cdr << ros_message->quality;
  }

  // Field name: max_flow_rate
  {
    cdr << ros_message->max_flow_rate;
  }

  // Field name: min_ground_distance
  {
    cdr << ros_message->min_ground_distance;
  }

  // Field name: max_ground_distance
  {
    cdr << ros_message->max_ground_distance;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  return true;
}

static bool _OpticalFlow__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpticalFlow__ros_msg_type * ros_message = static_cast<_OpticalFlow__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: sensor_id
  {
    cdr >> ros_message->sensor_id;
  }

  // Field name: pixel_flow_x_integral
  {
    cdr >> ros_message->pixel_flow_x_integral;
  }

  // Field name: pixel_flow_y_integral
  {
    cdr >> ros_message->pixel_flow_y_integral;
  }

  // Field name: gyro_x_rate_integral
  {
    cdr >> ros_message->gyro_x_rate_integral;
  }

  // Field name: gyro_y_rate_integral
  {
    cdr >> ros_message->gyro_y_rate_integral;
  }

  // Field name: gyro_z_rate_integral
  {
    cdr >> ros_message->gyro_z_rate_integral;
  }

  // Field name: ground_distance_m
  {
    cdr >> ros_message->ground_distance_m;
  }

  // Field name: integration_timespan
  {
    cdr >> ros_message->integration_timespan;
  }

  // Field name: time_since_last_sonar_update
  {
    cdr >> ros_message->time_since_last_sonar_update;
  }

  // Field name: frame_count_since_last_readout
  {
    cdr >> ros_message->frame_count_since_last_readout;
  }

  // Field name: gyro_temperature
  {
    cdr >> ros_message->gyro_temperature;
  }

  // Field name: quality
  {
    cdr >> ros_message->quality;
  }

  // Field name: max_flow_rate
  {
    cdr >> ros_message->max_flow_rate;
  }

  // Field name: min_ground_distance
  {
    cdr >> ros_message->min_ground_distance;
  }

  // Field name: max_ground_distance
  {
    cdr >> ros_message->max_ground_distance;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__OpticalFlow(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpticalFlow__ros_msg_type * ros_message = static_cast<const _OpticalFlow__ros_msg_type *>(untyped_ros_message);
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
  // field.name sensor_id
  {
    size_t item_size = sizeof(ros_message->sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pixel_flow_x_integral
  {
    size_t item_size = sizeof(ros_message->pixel_flow_x_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pixel_flow_y_integral
  {
    size_t item_size = sizeof(ros_message->pixel_flow_y_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_x_rate_integral
  {
    size_t item_size = sizeof(ros_message->gyro_x_rate_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_y_rate_integral
  {
    size_t item_size = sizeof(ros_message->gyro_y_rate_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_z_rate_integral
  {
    size_t item_size = sizeof(ros_message->gyro_z_rate_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ground_distance_m
  {
    size_t item_size = sizeof(ros_message->ground_distance_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integration_timespan
  {
    size_t item_size = sizeof(ros_message->integration_timespan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_since_last_sonar_update
  {
    size_t item_size = sizeof(ros_message->time_since_last_sonar_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frame_count_since_last_readout
  {
    size_t item_size = sizeof(ros_message->frame_count_since_last_readout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_temperature
  {
    size_t item_size = sizeof(ros_message->gyro_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quality
  {
    size_t item_size = sizeof(ros_message->quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_flow_rate
  {
    size_t item_size = sizeof(ros_message->max_flow_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_ground_distance
  {
    size_t item_size = sizeof(ros_message->min_ground_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_ground_distance
  {
    size_t item_size = sizeof(ros_message->max_ground_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OpticalFlow__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__OpticalFlow(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__OpticalFlow(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sensor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pixel_flow_x_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pixel_flow_y_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_x_rate_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_y_rate_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_z_rate_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ground_distance_m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: integration_timespan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_since_last_sonar_update
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: frame_count_since_last_readout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gyro_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_flow_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_ground_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_ground_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OpticalFlow__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__OpticalFlow(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OpticalFlow = {
  "px4_msgs::msg",
  "OpticalFlow",
  _OpticalFlow__cdr_serialize,
  _OpticalFlow__cdr_deserialize,
  _OpticalFlow__get_serialized_size,
  _OpticalFlow__max_serialized_size
};

static rosidl_message_type_support_t _OpticalFlow__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpticalFlow,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, OpticalFlow)() {
  return &_OpticalFlow__type_support;
}

#if defined(__cplusplus)
}
#endif
