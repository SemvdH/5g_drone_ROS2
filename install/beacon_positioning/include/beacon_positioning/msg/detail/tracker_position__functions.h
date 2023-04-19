// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice

#ifndef BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__FUNCTIONS_H_
#define BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "beacon_positioning/msg/rosidl_generator_c__visibility_control.h"

#include "beacon_positioning/msg/detail/tracker_position__struct.h"

/// Initialize msg/TrackerPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beacon_positioning__msg__TrackerPosition
 * )) before or use
 * beacon_positioning__msg__TrackerPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
bool
beacon_positioning__msg__TrackerPosition__init(beacon_positioning__msg__TrackerPosition * msg);

/// Finalize msg/TrackerPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
void
beacon_positioning__msg__TrackerPosition__fini(beacon_positioning__msg__TrackerPosition * msg);

/// Create msg/TrackerPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beacon_positioning__msg__TrackerPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
beacon_positioning__msg__TrackerPosition *
beacon_positioning__msg__TrackerPosition__create();

/// Destroy msg/TrackerPosition message.
/**
 * It calls
 * beacon_positioning__msg__TrackerPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
void
beacon_positioning__msg__TrackerPosition__destroy(beacon_positioning__msg__TrackerPosition * msg);

/// Check for msg/TrackerPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
bool
beacon_positioning__msg__TrackerPosition__are_equal(const beacon_positioning__msg__TrackerPosition * lhs, const beacon_positioning__msg__TrackerPosition * rhs);

/// Copy a msg/TrackerPosition message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
bool
beacon_positioning__msg__TrackerPosition__copy(
  const beacon_positioning__msg__TrackerPosition * input,
  beacon_positioning__msg__TrackerPosition * output);

/// Initialize array of msg/TrackerPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * beacon_positioning__msg__TrackerPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
bool
beacon_positioning__msg__TrackerPosition__Sequence__init(beacon_positioning__msg__TrackerPosition__Sequence * array, size_t size);

/// Finalize array of msg/TrackerPosition messages.
/**
 * It calls
 * beacon_positioning__msg__TrackerPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
void
beacon_positioning__msg__TrackerPosition__Sequence__fini(beacon_positioning__msg__TrackerPosition__Sequence * array);

/// Create array of msg/TrackerPosition messages.
/**
 * It allocates the memory for the array and calls
 * beacon_positioning__msg__TrackerPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
beacon_positioning__msg__TrackerPosition__Sequence *
beacon_positioning__msg__TrackerPosition__Sequence__create(size_t size);

/// Destroy array of msg/TrackerPosition messages.
/**
 * It calls
 * beacon_positioning__msg__TrackerPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
void
beacon_positioning__msg__TrackerPosition__Sequence__destroy(beacon_positioning__msg__TrackerPosition__Sequence * array);

/// Check for msg/TrackerPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
bool
beacon_positioning__msg__TrackerPosition__Sequence__are_equal(const beacon_positioning__msg__TrackerPosition__Sequence * lhs, const beacon_positioning__msg__TrackerPosition__Sequence * rhs);

/// Copy an array of msg/TrackerPosition messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beacon_positioning
bool
beacon_positioning__msg__TrackerPosition__Sequence__copy(
  const beacon_positioning__msg__TrackerPosition__Sequence * input,
  beacon_positioning__msg__TrackerPosition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__FUNCTIONS_H_
