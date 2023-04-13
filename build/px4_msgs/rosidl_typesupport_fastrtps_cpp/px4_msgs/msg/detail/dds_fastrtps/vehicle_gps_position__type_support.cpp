// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleGpsPosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_gps_position__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_gps_position__struct.hpp"

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
  const px4_msgs::msg::VehicleGpsPosition & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: lat
  cdr << ros_message.lat;
  // Member: lon
  cdr << ros_message.lon;
  // Member: alt
  cdr << ros_message.alt;
  // Member: alt_ellipsoid
  cdr << ros_message.alt_ellipsoid;
  // Member: s_variance_m_s
  cdr << ros_message.s_variance_m_s;
  // Member: c_variance_rad
  cdr << ros_message.c_variance_rad;
  // Member: fix_type
  cdr << ros_message.fix_type;
  // Member: eph
  cdr << ros_message.eph;
  // Member: epv
  cdr << ros_message.epv;
  // Member: hdop
  cdr << ros_message.hdop;
  // Member: vdop
  cdr << ros_message.vdop;
  // Member: noise_per_ms
  cdr << ros_message.noise_per_ms;
  // Member: jamming_indicator
  cdr << ros_message.jamming_indicator;
  // Member: jamming_state
  cdr << ros_message.jamming_state;
  // Member: vel_m_s
  cdr << ros_message.vel_m_s;
  // Member: vel_n_m_s
  cdr << ros_message.vel_n_m_s;
  // Member: vel_e_m_s
  cdr << ros_message.vel_e_m_s;
  // Member: vel_d_m_s
  cdr << ros_message.vel_d_m_s;
  // Member: cog_rad
  cdr << ros_message.cog_rad;
  // Member: vel_ned_valid
  cdr << (ros_message.vel_ned_valid ? true : false);
  // Member: timestamp_time_relative
  cdr << ros_message.timestamp_time_relative;
  // Member: time_utc_usec
  cdr << ros_message.time_utc_usec;
  // Member: satellites_used
  cdr << ros_message.satellites_used;
  // Member: heading
  cdr << ros_message.heading;
  // Member: heading_offset
  cdr << ros_message.heading_offset;
  // Member: selected
  cdr << ros_message.selected;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleGpsPosition & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: lat
  cdr >> ros_message.lat;

  // Member: lon
  cdr >> ros_message.lon;

  // Member: alt
  cdr >> ros_message.alt;

  // Member: alt_ellipsoid
  cdr >> ros_message.alt_ellipsoid;

  // Member: s_variance_m_s
  cdr >> ros_message.s_variance_m_s;

  // Member: c_variance_rad
  cdr >> ros_message.c_variance_rad;

  // Member: fix_type
  cdr >> ros_message.fix_type;

  // Member: eph
  cdr >> ros_message.eph;

  // Member: epv
  cdr >> ros_message.epv;

  // Member: hdop
  cdr >> ros_message.hdop;

  // Member: vdop
  cdr >> ros_message.vdop;

  // Member: noise_per_ms
  cdr >> ros_message.noise_per_ms;

  // Member: jamming_indicator
  cdr >> ros_message.jamming_indicator;

  // Member: jamming_state
  cdr >> ros_message.jamming_state;

  // Member: vel_m_s
  cdr >> ros_message.vel_m_s;

  // Member: vel_n_m_s
  cdr >> ros_message.vel_n_m_s;

  // Member: vel_e_m_s
  cdr >> ros_message.vel_e_m_s;

  // Member: vel_d_m_s
  cdr >> ros_message.vel_d_m_s;

  // Member: cog_rad
  cdr >> ros_message.cog_rad;

  // Member: vel_ned_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vel_ned_valid = tmp ? true : false;
  }

  // Member: timestamp_time_relative
  cdr >> ros_message.timestamp_time_relative;

  // Member: time_utc_usec
  cdr >> ros_message.time_utc_usec;

  // Member: satellites_used
  cdr >> ros_message.satellites_used;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: heading_offset
  cdr >> ros_message.heading_offset;

  // Member: selected
  cdr >> ros_message.selected;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleGpsPosition & ros_message,
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
  // Member: lat
  {
    size_t item_size = sizeof(ros_message.lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lon
  {
    size_t item_size = sizeof(ros_message.lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alt
  {
    size_t item_size = sizeof(ros_message.alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alt_ellipsoid
  {
    size_t item_size = sizeof(ros_message.alt_ellipsoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: s_variance_m_s
  {
    size_t item_size = sizeof(ros_message.s_variance_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c_variance_rad
  {
    size_t item_size = sizeof(ros_message.c_variance_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fix_type
  {
    size_t item_size = sizeof(ros_message.fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eph
  {
    size_t item_size = sizeof(ros_message.eph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: epv
  {
    size_t item_size = sizeof(ros_message.epv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hdop
  {
    size_t item_size = sizeof(ros_message.hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vdop
  {
    size_t item_size = sizeof(ros_message.vdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: noise_per_ms
  {
    size_t item_size = sizeof(ros_message.noise_per_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jamming_indicator
  {
    size_t item_size = sizeof(ros_message.jamming_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: jamming_state
  {
    size_t item_size = sizeof(ros_message.jamming_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_m_s
  {
    size_t item_size = sizeof(ros_message.vel_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_n_m_s
  {
    size_t item_size = sizeof(ros_message.vel_n_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_e_m_s
  {
    size_t item_size = sizeof(ros_message.vel_e_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_d_m_s
  {
    size_t item_size = sizeof(ros_message.vel_d_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cog_rad
  {
    size_t item_size = sizeof(ros_message.cog_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_ned_valid
  {
    size_t item_size = sizeof(ros_message.vel_ned_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_time_relative
  {
    size_t item_size = sizeof(ros_message.timestamp_time_relative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_utc_usec
  {
    size_t item_size = sizeof(ros_message.time_utc_usec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: satellites_used
  {
    size_t item_size = sizeof(ros_message.satellites_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_offset
  {
    size_t item_size = sizeof(ros_message.heading_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: selected
  {
    size_t item_size = sizeof(ros_message.selected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleGpsPosition(
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

  // Member: lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alt_ellipsoid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: s_variance_m_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: c_variance_rad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fix_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eph
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: epv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: noise_per_ms
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: jamming_indicator
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: jamming_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vel_m_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_n_m_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_e_m_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_d_m_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cog_rad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_ned_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: timestamp_time_relative
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_utc_usec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: satellites_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: selected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleGpsPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleGpsPosition *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleGpsPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleGpsPosition *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleGpsPosition__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleGpsPosition *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleGpsPosition__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleGpsPosition(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleGpsPosition__callbacks = {
  "px4_msgs::msg",
  "VehicleGpsPosition",
  _VehicleGpsPosition__cdr_serialize,
  _VehicleGpsPosition__cdr_deserialize,
  _VehicleGpsPosition__get_serialized_size,
  _VehicleGpsPosition__max_serialized_size
};

static rosidl_message_type_support_t _VehicleGpsPosition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleGpsPosition__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::VehicleGpsPosition>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleGpsPosition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleGpsPosition)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleGpsPosition__handle;
}

#ifdef __cplusplus
}
#endif
