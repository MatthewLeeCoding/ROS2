// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#ifndef STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__STRUCT_H_
#define STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/StatusDisplay in the package status_display_msgs.
typedef struct status_display_msgs__msg__StatusDisplay
{
  double left_setpoint;
  double left_velocity;
  double left_output;
  double right_setpoint;
  double right_velocity;
  double right_output;
} status_display_msgs__msg__StatusDisplay;

// Struct for a sequence of status_display_msgs__msg__StatusDisplay.
typedef struct status_display_msgs__msg__StatusDisplay__Sequence
{
  status_display_msgs__msg__StatusDisplay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} status_display_msgs__msg__StatusDisplay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__STRUCT_H_
