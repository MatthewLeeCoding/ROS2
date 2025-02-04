// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#ifndef STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__FUNCTIONS_H_
#define STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "status_display_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "status_display_msgs/msg/detail/status_display__struct.h"

/// Initialize msg/StatusDisplay message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * status_display_msgs__msg__StatusDisplay
 * )) before or use
 * status_display_msgs__msg__StatusDisplay__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
bool
status_display_msgs__msg__StatusDisplay__init(status_display_msgs__msg__StatusDisplay * msg);

/// Finalize msg/StatusDisplay message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
void
status_display_msgs__msg__StatusDisplay__fini(status_display_msgs__msg__StatusDisplay * msg);

/// Create msg/StatusDisplay message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * status_display_msgs__msg__StatusDisplay__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
status_display_msgs__msg__StatusDisplay *
status_display_msgs__msg__StatusDisplay__create();

/// Destroy msg/StatusDisplay message.
/**
 * It calls
 * status_display_msgs__msg__StatusDisplay__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
void
status_display_msgs__msg__StatusDisplay__destroy(status_display_msgs__msg__StatusDisplay * msg);

/// Check for msg/StatusDisplay message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
bool
status_display_msgs__msg__StatusDisplay__are_equal(const status_display_msgs__msg__StatusDisplay * lhs, const status_display_msgs__msg__StatusDisplay * rhs);

/// Copy a msg/StatusDisplay message.
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
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
bool
status_display_msgs__msg__StatusDisplay__copy(
  const status_display_msgs__msg__StatusDisplay * input,
  status_display_msgs__msg__StatusDisplay * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
const rosidl_type_hash_t *
status_display_msgs__msg__StatusDisplay__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
const rosidl_runtime_c__type_description__TypeDescription *
status_display_msgs__msg__StatusDisplay__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
const rosidl_runtime_c__type_description__TypeSource *
status_display_msgs__msg__StatusDisplay__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
status_display_msgs__msg__StatusDisplay__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/StatusDisplay messages.
/**
 * It allocates the memory for the number of elements and calls
 * status_display_msgs__msg__StatusDisplay__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
bool
status_display_msgs__msg__StatusDisplay__Sequence__init(status_display_msgs__msg__StatusDisplay__Sequence * array, size_t size);

/// Finalize array of msg/StatusDisplay messages.
/**
 * It calls
 * status_display_msgs__msg__StatusDisplay__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
void
status_display_msgs__msg__StatusDisplay__Sequence__fini(status_display_msgs__msg__StatusDisplay__Sequence * array);

/// Create array of msg/StatusDisplay messages.
/**
 * It allocates the memory for the array and calls
 * status_display_msgs__msg__StatusDisplay__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
status_display_msgs__msg__StatusDisplay__Sequence *
status_display_msgs__msg__StatusDisplay__Sequence__create(size_t size);

/// Destroy array of msg/StatusDisplay messages.
/**
 * It calls
 * status_display_msgs__msg__StatusDisplay__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
void
status_display_msgs__msg__StatusDisplay__Sequence__destroy(status_display_msgs__msg__StatusDisplay__Sequence * array);

/// Check for msg/StatusDisplay message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
bool
status_display_msgs__msg__StatusDisplay__Sequence__are_equal(const status_display_msgs__msg__StatusDisplay__Sequence * lhs, const status_display_msgs__msg__StatusDisplay__Sequence * rhs);

/// Copy an array of msg/StatusDisplay messages.
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
ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
bool
status_display_msgs__msg__StatusDisplay__Sequence__copy(
  const status_display_msgs__msg__StatusDisplay__Sequence * input,
  status_display_msgs__msg__StatusDisplay__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__FUNCTIONS_H_
