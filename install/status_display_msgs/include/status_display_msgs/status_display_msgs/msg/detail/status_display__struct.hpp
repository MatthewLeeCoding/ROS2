// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#ifndef STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__STRUCT_HPP_
#define STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__status_display_msgs__msg__StatusDisplay __attribute__((deprecated))
#else
# define DEPRECATED__status_display_msgs__msg__StatusDisplay __declspec(deprecated)
#endif

namespace status_display_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusDisplay_
{
  using Type = StatusDisplay_<ContainerAllocator>;

  explicit StatusDisplay_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_setpoint = 0.0;
      this->left_velocity = 0.0;
      this->left_output = 0.0;
      this->right_setpoint = 0.0;
      this->right_velocity = 0.0;
      this->right_output = 0.0;
    }
  }

  explicit StatusDisplay_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_setpoint = 0.0;
      this->left_velocity = 0.0;
      this->left_output = 0.0;
      this->right_setpoint = 0.0;
      this->right_velocity = 0.0;
      this->right_output = 0.0;
    }
  }

  // field types and members
  using _left_setpoint_type =
    double;
  _left_setpoint_type left_setpoint;
  using _left_velocity_type =
    double;
  _left_velocity_type left_velocity;
  using _left_output_type =
    double;
  _left_output_type left_output;
  using _right_setpoint_type =
    double;
  _right_setpoint_type right_setpoint;
  using _right_velocity_type =
    double;
  _right_velocity_type right_velocity;
  using _right_output_type =
    double;
  _right_output_type right_output;

  // setters for named parameter idiom
  Type & set__left_setpoint(
    const double & _arg)
  {
    this->left_setpoint = _arg;
    return *this;
  }
  Type & set__left_velocity(
    const double & _arg)
  {
    this->left_velocity = _arg;
    return *this;
  }
  Type & set__left_output(
    const double & _arg)
  {
    this->left_output = _arg;
    return *this;
  }
  Type & set__right_setpoint(
    const double & _arg)
  {
    this->right_setpoint = _arg;
    return *this;
  }
  Type & set__right_velocity(
    const double & _arg)
  {
    this->right_velocity = _arg;
    return *this;
  }
  Type & set__right_output(
    const double & _arg)
  {
    this->right_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    status_display_msgs::msg::StatusDisplay_<ContainerAllocator> *;
  using ConstRawPtr =
    const status_display_msgs::msg::StatusDisplay_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      status_display_msgs::msg::StatusDisplay_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      status_display_msgs::msg::StatusDisplay_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__status_display_msgs__msg__StatusDisplay
    std::shared_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__status_display_msgs__msg__StatusDisplay
    std::shared_ptr<status_display_msgs::msg::StatusDisplay_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusDisplay_ & other) const
  {
    if (this->left_setpoint != other.left_setpoint) {
      return false;
    }
    if (this->left_velocity != other.left_velocity) {
      return false;
    }
    if (this->left_output != other.left_output) {
      return false;
    }
    if (this->right_setpoint != other.right_setpoint) {
      return false;
    }
    if (this->right_velocity != other.right_velocity) {
      return false;
    }
    if (this->right_output != other.right_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusDisplay_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusDisplay_

// alias to use template instance with default allocator
using StatusDisplay =
  status_display_msgs::msg::StatusDisplay_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace status_display_msgs

#endif  // STATUS_DISPLAY_MSGS__MSG__DETAIL__STATUS_DISPLAY__STRUCT_HPP_
