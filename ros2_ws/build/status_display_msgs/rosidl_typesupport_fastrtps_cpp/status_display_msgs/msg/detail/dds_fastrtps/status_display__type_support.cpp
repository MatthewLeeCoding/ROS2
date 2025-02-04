// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice
#include "status_display_msgs/msg/detail/status_display__rosidl_typesupport_fastrtps_cpp.hpp"
#include "status_display_msgs/msg/detail/status_display__functions.h"
#include "status_display_msgs/msg/detail/status_display__struct.hpp"

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

namespace status_display_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_display_msgs
cdr_serialize(
  const status_display_msgs::msg::StatusDisplay & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_setpoint
  cdr << ros_message.left_setpoint;
  // Member: left_velocity
  cdr << ros_message.left_velocity;
  // Member: left_output
  cdr << ros_message.left_output;
  // Member: right_setpoint
  cdr << ros_message.right_setpoint;
  // Member: right_velocity
  cdr << ros_message.right_velocity;
  // Member: right_output
  cdr << ros_message.right_output;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_display_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  status_display_msgs::msg::StatusDisplay & ros_message)
{
  // Member: left_setpoint
  cdr >> ros_message.left_setpoint;

  // Member: left_velocity
  cdr >> ros_message.left_velocity;

  // Member: left_output
  cdr >> ros_message.left_output;

  // Member: right_setpoint
  cdr >> ros_message.right_setpoint;

  // Member: right_velocity
  cdr >> ros_message.right_velocity;

  // Member: right_output
  cdr >> ros_message.right_output;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_display_msgs
get_serialized_size(
  const status_display_msgs::msg::StatusDisplay & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_setpoint
  {
    size_t item_size = sizeof(ros_message.left_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_velocity
  {
    size_t item_size = sizeof(ros_message.left_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_output
  {
    size_t item_size = sizeof(ros_message.left_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_setpoint
  {
    size_t item_size = sizeof(ros_message.right_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_velocity
  {
    size_t item_size = sizeof(ros_message.right_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_output
  {
    size_t item_size = sizeof(ros_message.right_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_status_display_msgs
max_serialized_size_StatusDisplay(
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


  // Member: left_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_output
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
    using DataType = status_display_msgs::msg::StatusDisplay;
    is_plain =
      (
      offsetof(DataType, right_output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StatusDisplay__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const status_display_msgs::msg::StatusDisplay *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StatusDisplay__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<status_display_msgs::msg::StatusDisplay *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StatusDisplay__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const status_display_msgs::msg::StatusDisplay *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StatusDisplay__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StatusDisplay(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StatusDisplay__callbacks = {
  "status_display_msgs::msg",
  "StatusDisplay",
  _StatusDisplay__cdr_serialize,
  _StatusDisplay__cdr_deserialize,
  _StatusDisplay__get_serialized_size,
  _StatusDisplay__max_serialized_size
};

static rosidl_message_type_support_t _StatusDisplay__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StatusDisplay__callbacks,
  get_message_typesupport_handle_function,
  &status_display_msgs__msg__StatusDisplay__get_type_hash,
  &status_display_msgs__msg__StatusDisplay__get_type_description,
  &status_display_msgs__msg__StatusDisplay__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace status_display_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_status_display_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<status_display_msgs::msg::StatusDisplay>()
{
  return &status_display_msgs::msg::typesupport_fastrtps_cpp::_StatusDisplay__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, status_display_msgs, msg, StatusDisplay)() {
  return &status_display_msgs::msg::typesupport_fastrtps_cpp::_StatusDisplay__handle;
}

#ifdef __cplusplus
}
#endif
