// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#ifndef STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__BUILDER_HPP_
#define STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "status_display_msgs/msg/detail/status_display__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace status_display_msgs
{

namespace msg
{

namespace builder
{

class Init_StatusDisplay_right_output
{
public:
  explicit Init_StatusDisplay_right_output(::status_display_msgs::msg::StatusDisplay & msg)
  : msg_(msg)
  {}
  ::status_display_msgs::msg::StatusDisplay right_output(::status_display_msgs::msg::StatusDisplay::_right_output_type arg)
  {
    msg_.right_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::status_display_msgs::msg::StatusDisplay msg_;
};

class Init_StatusDisplay_right_velocity
{
public:
  explicit Init_StatusDisplay_right_velocity(::status_display_msgs::msg::StatusDisplay & msg)
  : msg_(msg)
  {}
  Init_StatusDisplay_right_output right_velocity(::status_display_msgs::msg::StatusDisplay::_right_velocity_type arg)
  {
    msg_.right_velocity = std::move(arg);
    return Init_StatusDisplay_right_output(msg_);
  }

private:
  ::status_display_msgs::msg::StatusDisplay msg_;
};

class Init_StatusDisplay_right_setpoint
{
public:
  explicit Init_StatusDisplay_right_setpoint(::status_display_msgs::msg::StatusDisplay & msg)
  : msg_(msg)
  {}
  Init_StatusDisplay_right_velocity right_setpoint(::status_display_msgs::msg::StatusDisplay::_right_setpoint_type arg)
  {
    msg_.right_setpoint = std::move(arg);
    return Init_StatusDisplay_right_velocity(msg_);
  }

private:
  ::status_display_msgs::msg::StatusDisplay msg_;
};

class Init_StatusDisplay_left_output
{
public:
  explicit Init_StatusDisplay_left_output(::status_display_msgs::msg::StatusDisplay & msg)
  : msg_(msg)
  {}
  Init_StatusDisplay_right_setpoint left_output(::status_display_msgs::msg::StatusDisplay::_left_output_type arg)
  {
    msg_.left_output = std::move(arg);
    return Init_StatusDisplay_right_setpoint(msg_);
  }

private:
  ::status_display_msgs::msg::StatusDisplay msg_;
};

class Init_StatusDisplay_left_velocity
{
public:
  explicit Init_StatusDisplay_left_velocity(::status_display_msgs::msg::StatusDisplay & msg)
  : msg_(msg)
  {}
  Init_StatusDisplay_left_output left_velocity(::status_display_msgs::msg::StatusDisplay::_left_velocity_type arg)
  {
    msg_.left_velocity = std::move(arg);
    return Init_StatusDisplay_left_output(msg_);
  }

private:
  ::status_display_msgs::msg::StatusDisplay msg_;
};

class Init_StatusDisplay_left_setpoint
{
public:
  Init_StatusDisplay_left_setpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusDisplay_left_velocity left_setpoint(::status_display_msgs::msg::StatusDisplay::_left_setpoint_type arg)
  {
    msg_.left_setpoint = std::move(arg);
    return Init_StatusDisplay_left_velocity(msg_);
  }

private:
  ::status_display_msgs::msg::StatusDisplay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::status_display_msgs::msg::StatusDisplay>()
{
  return status_display_msgs::msg::builder::Init_StatusDisplay_left_setpoint();
}

}  // namespace status_display_msgs

#endif  // STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__BUILDER_HPP_
