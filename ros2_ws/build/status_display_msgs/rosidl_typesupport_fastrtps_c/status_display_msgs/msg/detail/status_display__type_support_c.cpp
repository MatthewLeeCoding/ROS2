// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice
#include "status_display_msgs/msg/detail/status_display__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "status_display_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "status_display_msgs/msg/detail/status_display__struct.h"
#include "status_display_msgs/msg/detail/status_display__functions.h"
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


using _StatusDisplay__ros_msg_type = status_display_msgs__msg__StatusDisplay;

static bool _StatusDisplay__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StatusDisplay__ros_msg_type * ros_message = static_cast<const _StatusDisplay__ros_msg_type *>(untyped_ros_message);
  // Field name: left_setpoint
  {
    cdr << ros_message->left_setpoint;
  }

  // Field name: left_velocity
  {
    cdr << ros_message->left_velocity;
  }

  // Field name: left_output
  {
    cdr << ros_message->left_output;
  }

  // Field name: right_setpoint
  {
    cdr << ros_message->right_setpoint;
  }

  // Field name: right_velocity
  {
    cdr << ros_message->right_velocity;
  }

  // Field name: right_output
  {
    cdr << ros_message->right_output;
  }

  return true;
}

static bool _StatusDisplay__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StatusDisplay__ros_msg_type * ros_message = static_cast<_StatusDisplay__ros_msg_type *>(untyped_ros_message);
  // Field name: left_setpoint
  {
    cdr >> ros_message->left_setpoint;
  }

  // Field name: left_velocity
  {
    cdr >> ros_message->left_velocity;
  }

  // Field name: left_output
  {
    cdr >> ros_message->left_output;
  }

  // Field name: right_setpoint
  {
    cdr >> ros_message->right_setpoint;
  }

  // Field name: right_velocity
  {
    cdr >> ros_message->right_velocity;
  }

  // Field name: right_output
  {
    cdr >> ros_message->right_output;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_display_msgs
size_t get_serialized_size_status_display_msgs__msg__StatusDisplay(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StatusDisplay__ros_msg_type * ros_message = static_cast<const _StatusDisplay__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_setpoint
  {
    size_t item_size = sizeof(ros_message->left_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_velocity
  {
    size_t item_size = sizeof(ros_message->left_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_output
  {
    size_t item_size = sizeof(ros_message->left_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_setpoint
  {
    size_t item_size = sizeof(ros_message->right_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_velocity
  {
    size_t item_size = sizeof(ros_message->right_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_output
  {
    size_t item_size = sizeof(ros_message->right_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StatusDisplay__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_status_display_msgs__msg__StatusDisplay(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_status_display_msgs
size_t max_serialized_size_status_display_msgs__msg__StatusDisplay(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: left_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = status_display_msgs__msg__StatusDisplay;
    is_plain =
      (
      offsetof(DataType, right_output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StatusDisplay__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_status_display_msgs__msg__StatusDisplay(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StatusDisplay = {
  "status_display_msgs::msg",
  "StatusDisplay",
  _StatusDisplay__cdr_serialize,
  _StatusDisplay__cdr_deserialize,
  _StatusDisplay__get_serialized_size,
  _StatusDisplay__max_serialized_size
};

static rosidl_message_type_support_t _StatusDisplay__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StatusDisplay,
  get_message_typesupport_handle_function,
  &status_display_msgs__msg__StatusDisplay__get_type_hash,
  &status_display_msgs__msg__StatusDisplay__get_type_description,
  &status_display_msgs__msg__StatusDisplay__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, status_display_msgs, msg, StatusDisplay)() {
  return &_StatusDisplay__type_support;
}

#if defined(__cplusplus)
}
#endif
