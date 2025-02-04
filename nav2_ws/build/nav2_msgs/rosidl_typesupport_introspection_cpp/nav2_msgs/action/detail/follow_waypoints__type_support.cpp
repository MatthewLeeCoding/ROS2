// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nav2_msgs:action/FollowWaypoints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nav2_msgs/action/detail/follow_waypoints__functions.h"
#include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_Goal(_init);
}

void FollowWaypoints_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_Goal *>(message_memory);
  typed_message->~FollowWaypoints_Goal();
}

size_t size_function__FollowWaypoints_Goal__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowWaypoints_Goal__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowWaypoints_Goal__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowWaypoints_Goal__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(
    get_const_function__FollowWaypoints_Goal__poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(untyped_value);
  value = item;
}

void assign_function__FollowWaypoints_Goal__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(
    get_function__FollowWaypoints_Goal__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(untyped_value);
  item = value;
}

void resize_function__FollowWaypoints_Goal__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_Goal_message_member_array[3] = {
  {
    "number_of_loops",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_Goal, number_of_loops),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_Goal, goal_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_Goal, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowWaypoints_Goal__poses,  // size() function pointer
    get_const_function__FollowWaypoints_Goal__poses,  // get_const(index) function pointer
    get_function__FollowWaypoints_Goal__poses,  // get(index) function pointer
    fetch_function__FollowWaypoints_Goal__poses,  // fetch(index, &value) function pointer
    assign_function__FollowWaypoints_Goal__poses,  // assign(index, value) function pointer
    resize_function__FollowWaypoints_Goal__poses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_Goal_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_Goal",  // message name
  3,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_Goal),
  FollowWaypoints_Goal_message_member_array,  // message members
  FollowWaypoints_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_Goal_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_Goal__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_Goal__get_type_description,
  &nav2_msgs__action__FollowWaypoints_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Goal>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_Goal)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_Result(_init);
}

void FollowWaypoints_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_Result *>(message_memory);
  typed_message->~FollowWaypoints_Result();
}

size_t size_function__FollowWaypoints_Result__missed_waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav2_msgs::msg::MissedWaypoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowWaypoints_Result__missed_waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav2_msgs::msg::MissedWaypoint> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowWaypoints_Result__missed_waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav2_msgs::msg::MissedWaypoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowWaypoints_Result__missed_waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav2_msgs::msg::MissedWaypoint *>(
    get_const_function__FollowWaypoints_Result__missed_waypoints(untyped_member, index));
  auto & value = *reinterpret_cast<nav2_msgs::msg::MissedWaypoint *>(untyped_value);
  value = item;
}

void assign_function__FollowWaypoints_Result__missed_waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav2_msgs::msg::MissedWaypoint *>(
    get_function__FollowWaypoints_Result__missed_waypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav2_msgs::msg::MissedWaypoint *>(untyped_value);
  item = value;
}

void resize_function__FollowWaypoints_Result__missed_waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav2_msgs::msg::MissedWaypoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_Result_message_member_array[1] = {
  {
    "missed_waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::msg::MissedWaypoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_Result, missed_waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowWaypoints_Result__missed_waypoints,  // size() function pointer
    get_const_function__FollowWaypoints_Result__missed_waypoints,  // get_const(index) function pointer
    get_function__FollowWaypoints_Result__missed_waypoints,  // get(index) function pointer
    fetch_function__FollowWaypoints_Result__missed_waypoints,  // fetch(index, &value) function pointer
    assign_function__FollowWaypoints_Result__missed_waypoints,  // assign(index, value) function pointer
    resize_function__FollowWaypoints_Result__missed_waypoints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_Result_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_Result",  // message name
  1,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_Result),
  FollowWaypoints_Result_message_member_array,  // message members
  FollowWaypoints_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_Result_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_Result__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_Result__get_type_description,
  &nav2_msgs__action__FollowWaypoints_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Result>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_Result)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_Feedback(_init);
}

void FollowWaypoints_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_Feedback *>(message_memory);
  typed_message->~FollowWaypoints_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_Feedback_message_member_array[1] = {
  {
    "current_waypoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_Feedback, current_waypoint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_Feedback_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_Feedback",  // message name
  1,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_Feedback),
  FollowWaypoints_Feedback_message_member_array,  // message members
  FollowWaypoints_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_Feedback_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_Feedback__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_Feedback__get_type_description,
  &nav2_msgs__action__FollowWaypoints_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Feedback>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_Feedback)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_SendGoal_Request(_init);
}

void FollowWaypoints_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_SendGoal_Request *>(message_memory);
  typed_message->~FollowWaypoints_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_SendGoal_Request_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_SendGoal_Request),
  FollowWaypoints_SendGoal_Request_message_member_array,  // message members
  FollowWaypoints_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Request__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Request__get_type_description,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Request)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_SendGoal_Response(_init);
}

void FollowWaypoints_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_SendGoal_Response *>(message_memory);
  typed_message->~FollowWaypoints_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_SendGoal_Response_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_SendGoal_Response),
  FollowWaypoints_SendGoal_Response_message_member_array,  // message members
  FollowWaypoints_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Response__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Response__get_type_description,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Response)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_SendGoal_Event(_init);
}

void FollowWaypoints_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_SendGoal_Event *>(message_memory);
  typed_message->~FollowWaypoints_SendGoal_Event();
}

size_t size_function__FollowWaypoints_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowWaypoints_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowWaypoints_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowWaypoints_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_SendGoal_Request *>(
    get_const_function__FollowWaypoints_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__FollowWaypoints_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_SendGoal_Request *>(
    get_function__FollowWaypoints_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__FollowWaypoints_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FollowWaypoints_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowWaypoints_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowWaypoints_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowWaypoints_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_SendGoal_Response *>(
    get_const_function__FollowWaypoints_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__FollowWaypoints_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_SendGoal_Response *>(
    get_function__FollowWaypoints_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__FollowWaypoints_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowWaypoints_SendGoal_Event__request,  // size() function pointer
    get_const_function__FollowWaypoints_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__FollowWaypoints_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__FollowWaypoints_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__FollowWaypoints_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__FollowWaypoints_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowWaypoints_SendGoal_Event__response,  // size() function pointer
    get_const_function__FollowWaypoints_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__FollowWaypoints_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__FollowWaypoints_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__FollowWaypoints_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__FollowWaypoints_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_SendGoal_Event_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_SendGoal_Event),
  FollowWaypoints_SendGoal_Event_message_member_array,  // message members
  FollowWaypoints_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Event__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Event__get_type_description,
  &nav2_msgs__action__FollowWaypoints_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Event>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_SendGoal_Event)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FollowWaypoints_SendGoal_service_members = {
  "nav2_msgs::action",  // service namespace
  "FollowWaypoints_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t FollowWaypoints_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<nav2_msgs::action::FollowWaypoints_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<nav2_msgs::action::FollowWaypoints_SendGoal>,
  &nav2_msgs__action__FollowWaypoints_SendGoal__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_SendGoal__get_type_description,
  &nav2_msgs__action__FollowWaypoints_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nav2_msgs::action::FollowWaypoints_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nav2_msgs::action::FollowWaypoints_SendGoal_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nav2_msgs::action::FollowWaypoints_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_GetResult_Request(_init);
}

void FollowWaypoints_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_GetResult_Request *>(message_memory);
  typed_message->~FollowWaypoints_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_GetResult_Request_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_GetResult_Request),
  FollowWaypoints_GetResult_Request_message_member_array,  // message members
  FollowWaypoints_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_GetResult_Request__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_GetResult_Request__get_type_description,
  &nav2_msgs__action__FollowWaypoints_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Request>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Request)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_GetResult_Response(_init);
}

void FollowWaypoints_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_GetResult_Response *>(message_memory);
  typed_message->~FollowWaypoints_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_GetResult_Response_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_GetResult_Response),
  FollowWaypoints_GetResult_Response_message_member_array,  // message members
  FollowWaypoints_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_GetResult_Response__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_GetResult_Response__get_type_description,
  &nav2_msgs__action__FollowWaypoints_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Response>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Response)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_GetResult_Event(_init);
}

void FollowWaypoints_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_GetResult_Event *>(message_memory);
  typed_message->~FollowWaypoints_GetResult_Event();
}

size_t size_function__FollowWaypoints_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowWaypoints_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowWaypoints_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowWaypoints_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_GetResult_Request *>(
    get_const_function__FollowWaypoints_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__FollowWaypoints_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_GetResult_Request *>(
    get_function__FollowWaypoints_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__FollowWaypoints_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FollowWaypoints_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowWaypoints_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowWaypoints_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowWaypoints_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_GetResult_Response *>(
    get_const_function__FollowWaypoints_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__FollowWaypoints_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav2_msgs::action::FollowWaypoints_GetResult_Response *>(
    get_function__FollowWaypoints_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav2_msgs::action::FollowWaypoints_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__FollowWaypoints_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav2_msgs::action::FollowWaypoints_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowWaypoints_GetResult_Event__request,  // size() function pointer
    get_const_function__FollowWaypoints_GetResult_Event__request,  // get_const(index) function pointer
    get_function__FollowWaypoints_GetResult_Event__request,  // get(index) function pointer
    fetch_function__FollowWaypoints_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__FollowWaypoints_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__FollowWaypoints_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowWaypoints_GetResult_Event__response,  // size() function pointer
    get_const_function__FollowWaypoints_GetResult_Event__response,  // get_const(index) function pointer
    get_function__FollowWaypoints_GetResult_Event__response,  // get(index) function pointer
    fetch_function__FollowWaypoints_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__FollowWaypoints_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__FollowWaypoints_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_GetResult_Event_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_GetResult_Event),
  FollowWaypoints_GetResult_Event_message_member_array,  // message members
  FollowWaypoints_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_GetResult_Event__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_GetResult_Event__get_type_description,
  &nav2_msgs__action__FollowWaypoints_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Event>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_GetResult_Event)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FollowWaypoints_GetResult_service_members = {
  "nav2_msgs::action",  // service namespace
  "FollowWaypoints_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t FollowWaypoints_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<nav2_msgs::action::FollowWaypoints_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<nav2_msgs::action::FollowWaypoints_GetResult>,
  &nav2_msgs__action__FollowWaypoints_GetResult__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_GetResult__get_type_description,
  &nav2_msgs__action__FollowWaypoints_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nav2_msgs::action::FollowWaypoints_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nav2_msgs::action::FollowWaypoints_GetResult_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::nav2_msgs::action::FollowWaypoints_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<nav2_msgs::action::FollowWaypoints_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__functions.h"
// already included above
// #include "nav2_msgs/action/detail/follow_waypoints__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav2_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowWaypoints_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav2_msgs::action::FollowWaypoints_FeedbackMessage(_init);
}

void FollowWaypoints_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav2_msgs::action::FollowWaypoints_FeedbackMessage *>(message_memory);
  typed_message->~FollowWaypoints_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowWaypoints_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs::action::FollowWaypoints_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowWaypoints_FeedbackMessage_message_members = {
  "nav2_msgs::action",  // message namespace
  "FollowWaypoints_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nav2_msgs::action::FollowWaypoints_FeedbackMessage),
  FollowWaypoints_FeedbackMessage_message_member_array,  // message members
  FollowWaypoints_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowWaypoints_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowWaypoints_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowWaypoints_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__FollowWaypoints_FeedbackMessage__get_type_hash,
  &nav2_msgs__action__FollowWaypoints_FeedbackMessage__get_type_description,
  &nav2_msgs__action__FollowWaypoints_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace nav2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav2_msgs::action::FollowWaypoints_FeedbackMessage>()
{
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav2_msgs, action, FollowWaypoints_FeedbackMessage)() {
  return &::nav2_msgs::action::rosidl_typesupport_introspection_cpp::FollowWaypoints_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
