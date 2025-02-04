// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dwb_msgs/msg/detail/trajectory_score__rosidl_typesupport_introspection_c.h"
#include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"
#include "dwb_msgs/msg/detail/trajectory_score__struct.h"


// Include directives for member types
// Member `traj`
#include "dwb_msgs/msg/trajectory2_d.h"
// Member `traj`
#include "dwb_msgs/msg/detail/trajectory2_d__rosidl_typesupport_introspection_c.h"
// Member `scores`
#include "dwb_msgs/msg/critic_score.h"
// Member `scores`
#include "dwb_msgs/msg/detail/critic_score__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dwb_msgs__msg__TrajectoryScore__init(message_memory);
}

void dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_fini_function(void * message_memory)
{
  dwb_msgs__msg__TrajectoryScore__fini(message_memory);
}

size_t dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__size_function__TrajectoryScore__scores(
  const void * untyped_member)
{
  const dwb_msgs__msg__CriticScore__Sequence * member =
    (const dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  return member->size;
}

const void * dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__get_const_function__TrajectoryScore__scores(
  const void * untyped_member, size_t index)
{
  const dwb_msgs__msg__CriticScore__Sequence * member =
    (const dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__get_function__TrajectoryScore__scores(
  void * untyped_member, size_t index)
{
  dwb_msgs__msg__CriticScore__Sequence * member =
    (dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  return &member->data[index];
}

void dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__fetch_function__TrajectoryScore__scores(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dwb_msgs__msg__CriticScore * item =
    ((const dwb_msgs__msg__CriticScore *)
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__get_const_function__TrajectoryScore__scores(untyped_member, index));
  dwb_msgs__msg__CriticScore * value =
    (dwb_msgs__msg__CriticScore *)(untyped_value);
  *value = *item;
}

void dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__assign_function__TrajectoryScore__scores(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dwb_msgs__msg__CriticScore * item =
    ((dwb_msgs__msg__CriticScore *)
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__get_function__TrajectoryScore__scores(untyped_member, index));
  const dwb_msgs__msg__CriticScore * value =
    (const dwb_msgs__msg__CriticScore *)(untyped_value);
  *item = *value;
}

bool dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__resize_function__TrajectoryScore__scores(
  void * untyped_member, size_t size)
{
  dwb_msgs__msg__CriticScore__Sequence * member =
    (dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  dwb_msgs__msg__CriticScore__Sequence__fini(member);
  return dwb_msgs__msg__CriticScore__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array[3] = {
  {
    "traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__TrajectoryScore, traj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scores",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__TrajectoryScore, scores),  // bytes offset in struct
    NULL,  // default value
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__size_function__TrajectoryScore__scores,  // size() function pointer
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__get_const_function__TrajectoryScore__scores,  // get_const(index) function pointer
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__get_function__TrajectoryScore__scores,  // get(index) function pointer
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__fetch_function__TrajectoryScore__scores,  // fetch(index, &value) function pointer
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__assign_function__TrajectoryScore__scores,  // assign(index, value) function pointer
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__resize_function__TrajectoryScore__scores  // resize(index) function pointer
  },
  {
    "total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__TrajectoryScore, total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_members = {
  "dwb_msgs__msg",  // message namespace
  "TrajectoryScore",  // message name
  3,  // number of fields
  sizeof(dwb_msgs__msg__TrajectoryScore),
  dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array,  // message members
  dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_init_function,  // function to initialize message memory (memory has to be allocated)
  dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle = {
  0,
  &dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_members,
  get_message_typesupport_handle_function,
  &dwb_msgs__msg__TrajectoryScore__get_type_hash,
  &dwb_msgs__msg__TrajectoryScore__get_type_description,
  &dwb_msgs__msg__TrajectoryScore__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, TrajectoryScore)() {
  dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, Trajectory2D)();
  dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, CriticScore)();
  if (!dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle.typesupport_identifier) {
    dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dwb_msgs__msg__TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
