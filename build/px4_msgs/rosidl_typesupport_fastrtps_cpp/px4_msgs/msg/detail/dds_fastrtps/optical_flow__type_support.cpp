// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/optical_flow__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/optical_flow__struct.hpp"

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
  const px4_msgs::msg::OpticalFlow & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: sensor_id
  cdr << ros_message.sensor_id;
  // Member: pixel_flow_x_integral
  cdr << ros_message.pixel_flow_x_integral;
  // Member: pixel_flow_y_integral
  cdr << ros_message.pixel_flow_y_integral;
  // Member: gyro_x_rate_integral
  cdr << ros_message.gyro_x_rate_integral;
  // Member: gyro_y_rate_integral
  cdr << ros_message.gyro_y_rate_integral;
  // Member: gyro_z_rate_integral
  cdr << ros_message.gyro_z_rate_integral;
  // Member: ground_distance_m
  cdr << ros_message.ground_distance_m;
  // Member: integration_timespan
  cdr << ros_message.integration_timespan;
  // Member: time_since_last_sonar_update
  cdr << ros_message.time_since_last_sonar_update;
  // Member: frame_count_since_last_readout
  cdr << ros_message.frame_count_since_last_readout;
  // Member: gyro_temperature
  cdr << ros_message.gyro_temperature;
  // Member: quality
  cdr << ros_message.quality;
  // Member: max_flow_rate
  cdr << ros_message.max_flow_rate;
  // Member: min_ground_distance
  cdr << ros_message.min_ground_distance;
  // Member: max_ground_distance
  cdr << ros_message.max_ground_distance;
  // Member: mode
  cdr << ros_message.mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::OpticalFlow & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: sensor_id
  cdr >> ros_message.sensor_id;

  // Member: pixel_flow_x_integral
  cdr >> ros_message.pixel_flow_x_integral;

  // Member: pixel_flow_y_integral
  cdr >> ros_message.pixel_flow_y_integral;

  // Member: gyro_x_rate_integral
  cdr >> ros_message.gyro_x_rate_integral;

  // Member: gyro_y_rate_integral
  cdr >> ros_message.gyro_y_rate_integral;

  // Member: gyro_z_rate_integral
  cdr >> ros_message.gyro_z_rate_integral;

  // Member: ground_distance_m
  cdr >> ros_message.ground_distance_m;

  // Member: integration_timespan
  cdr >> ros_message.integration_timespan;

  // Member: time_since_last_sonar_update
  cdr >> ros_message.time_since_last_sonar_update;

  // Member: frame_count_since_last_readout
  cdr >> ros_message.frame_count_since_last_readout;

  // Member: gyro_temperature
  cdr >> ros_message.gyro_temperature;

  // Member: quality
  cdr >> ros_message.quality;

  // Member: max_flow_rate
  cdr >> ros_message.max_flow_rate;

  // Member: min_ground_distance
  cdr >> ros_message.min_ground_distance;

  // Member: max_ground_distance
  cdr >> ros_message.max_ground_distance;

  // Member: mode
  cdr >> ros_message.mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::OpticalFlow & ros_message,
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
  // Member: sensor_id
  {
    size_t item_size = sizeof(ros_message.sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pixel_flow_x_integral
  {
    size_t item_size = sizeof(ros_message.pixel_flow_x_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pixel_flow_y_integral
  {
    size_t item_size = sizeof(ros_message.pixel_flow_y_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_x_rate_integral
  {
    size_t item_size = sizeof(ros_message.gyro_x_rate_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_y_rate_integral
  {
    size_t item_size = sizeof(ros_message.gyro_y_rate_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_z_rate_integral
  {
    size_t item_size = sizeof(ros_message.gyro_z_rate_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ground_distance_m
  {
    size_t item_size = sizeof(ros_message.ground_distance_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: integration_timespan
  {
    size_t item_size = sizeof(ros_message.integration_timespan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_since_last_sonar_update
  {
    size_t item_size = sizeof(ros_message.time_since_last_sonar_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frame_count_since_last_readout
  {
    size_t item_size = sizeof(ros_message.frame_count_since_last_readout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_temperature
  {
    size_t item_size = sizeof(ros_message.gyro_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quality
  {
    size_t item_size = sizeof(ros_message.quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_flow_rate
  {
    size_t item_size = sizeof(ros_message.max_flow_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_ground_distance
  {
    size_t item_size = sizeof(ros_message.min_ground_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_ground_distance
  {
    size_t item_size = sizeof(ros_message.max_ground_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_OpticalFlow(
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

  // Member: sensor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pixel_flow_x_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pixel_flow_y_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_x_rate_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_y_rate_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_z_rate_integral
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ground_distance_m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: integration_timespan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_since_last_sonar_update
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: frame_count_since_last_readout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gyro_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_flow_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_ground_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_ground_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _OpticalFlow__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::OpticalFlow *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpticalFlow__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::OpticalFlow *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpticalFlow__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::OpticalFlow *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpticalFlow__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpticalFlow(full_bounded, 0);
}

static message_type_support_callbacks_t _OpticalFlow__callbacks = {
  "px4_msgs::msg",
  "OpticalFlow",
  _OpticalFlow__cdr_serialize,
  _OpticalFlow__cdr_deserialize,
  _OpticalFlow__get_serialized_size,
  _OpticalFlow__max_serialized_size
};

static rosidl_message_type_support_t _OpticalFlow__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpticalFlow__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::OpticalFlow>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_OpticalFlow__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, OpticalFlow)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_OpticalFlow__handle;
}

#ifdef __cplusplus
}
#endif
