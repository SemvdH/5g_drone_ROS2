// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleGpsPosition in the package px4_msgs.
/**
  * GPS position in WGS84 coordinates.
  * the field 'timestamp' is for the position & velocity (microseconds)
 */
typedef struct px4_msgs__msg__VehicleGpsPosition
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Latitude in 1E-7 degrees
  int32_t lat;
  /// Longitude in 1E-7 degrees
  int32_t lon;
  /// Altitude in 1E-3 meters above MSL, (millimetres)
  int32_t alt;
  /// Altitude in 1E-3 meters bove Ellipsoid, (millimetres)
  int32_t alt_ellipsoid;
  /// GPS speed accuracy estimate, (metres/sec)
  float s_variance_m_s;
  /// GPS course accuracy estimate, (radians)
  float c_variance_rad;
  /// 0-1: no fix, 2: 2D fix, 3: 3D fix, 4: RTCM code differential, 5: Real-Time Kinematic, float, 6: Real-Time Kinematic, fixed, 8: Extrapolated. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
  uint8_t fix_type;
  /// GPS horizontal position accuracy (metres)
  float eph;
  /// GPS vertical position accuracy (metres)
  float epv;
  /// Horizontal dilution of precision
  float hdop;
  /// Vertical dilution of precision
  float vdop;
  /// GPS noise per millisecond
  int32_t noise_per_ms;
  /// indicates jamming is occurring
  int32_t jamming_indicator;
  /// indicates whether jamming has been detected or suspected by the receivers. O: Unknown, 1: OK, 2: Warning, 3: Critical
  uint8_t jamming_state;
  /// GPS ground speed, (metres/sec)
  float vel_m_s;
  /// GPS North velocity, (metres/sec)
  float vel_n_m_s;
  /// GPS East velocity, (metres/sec)
  float vel_e_m_s;
  /// GPS Down velocity, (metres/sec)
  float vel_d_m_s;
  /// Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)
  float cog_rad;
  /// True if NED velocity is valid
  bool vel_ned_valid;
  /// timestamp + timestamp_time_relative = Time of the UTC timestamp since system start, (microseconds)
  int32_t timestamp_time_relative;
  /// Timestamp (microseconds, UTC), this is the timestamp which comes from the gps module. It might be unavailable right after cold start, indicated by a value of 0
  uint64_t time_utc_usec;
  /// Number of satellites used
  uint8_t satellites_used;
  /// heading angle of XYZ body frame rel to NED. Set to NaN if not available and updated (used for dual antenna GPS), (rad, [-PI, PI])
  float heading;
  /// heading offset of dual antenna array in body frame. Set to NaN if not applicable. (rad, [-PI, PI])
  float heading_offset;
  /// GPS selection: 0: GPS1, 1: GPS2. 2: GPS3. 3. Blending multiple receivers
  uint8_t selected;
} px4_msgs__msg__VehicleGpsPosition;

// Struct for a sequence of px4_msgs__msg__VehicleGpsPosition.
typedef struct px4_msgs__msg__VehicleGpsPosition__Sequence
{
  px4_msgs__msg__VehicleGpsPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleGpsPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_H_
