// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#ifndef STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__TRAITS_HPP_
#define STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "status_display_msgs/msg/detail/status_display__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace status_display_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusDisplay & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_setpoint
  {
    out << "left_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.left_setpoint, out);
    out << ", ";
  }

  // member: left_velocity
  {
    out << "left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_velocity, out);
    out << ", ";
  }

  // member: left_output
  {
    out << "left_output: ";
    rosidl_generator_traits::value_to_yaml(msg.left_output, out);
    out << ", ";
  }

  // member: right_setpoint
  {
    out << "right_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.right_setpoint, out);
    out << ", ";
  }

  // member: right_velocity
  {
    out << "right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_velocity, out);
    out << ", ";
  }

  // member: right_output
  {
    out << "right_output: ";
    rosidl_generator_traits::value_to_yaml(msg.right_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatusDisplay & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.left_setpoint, out);
    out << "\n";
  }

  // member: left_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_velocity, out);
    out << "\n";
  }

  // member: left_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_output: ";
    rosidl_generator_traits::value_to_yaml(msg.left_output, out);
    out << "\n";
  }

  // member: right_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.right_setpoint, out);
    out << "\n";
  }

  // member: right_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_velocity, out);
    out << "\n";
  }

  // member: right_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_output: ";
    rosidl_generator_traits::value_to_yaml(msg.right_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusDisplay & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace status_display_msgs

namespace rosidl_generator_traits
{

[[deprecated("use status_display_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const status_display_msgs::msg::StatusDisplay & msg,
  std::ostream & out, size_t indentation = 0)
{
  status_display_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use status_display_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const status_display_msgs::msg::StatusDisplay & msg)
{
  return status_display_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<status_display_msgs::msg::StatusDisplay>()
{
  return "status_display_msgs::msg::StatusDisplay";
}

template<>
inline const char * name<status_display_msgs::msg::StatusDisplay>()
{
  return "status_display_msgs/msg/StatusDisplay";
}

template<>
struct has_fixed_size<status_display_msgs::msg::StatusDisplay>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<status_display_msgs::msg::StatusDisplay>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<status_display_msgs::msg::StatusDisplay>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__TRAITS_HPP_
