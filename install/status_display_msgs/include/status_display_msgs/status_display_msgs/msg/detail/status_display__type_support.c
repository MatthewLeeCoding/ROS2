// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "status_display_msgs/msg/detail/status_display__rosidl_typesupport_introspection_c.h"
#include "status_display_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "status_display_msgs/msg/detail/status_display__functions.h"
#include "status_display_msgs/msg/detail/status_display__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  status_display_msgs__msg__StatusDisplay__init(message_memory);
}

void status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_fini_function(void * message_memory)
{
  status_display_msgs__msg__StatusDisplay__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_member_array[6] = {
  {
    "left_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_display_msgs__msg__StatusDisplay, left_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_display_msgs__msg__StatusDisplay, left_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_display_msgs__msg__StatusDisplay, left_output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_display_msgs__msg__StatusDisplay, right_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_display_msgs__msg__StatusDisplay, right_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_display_msgs__msg__StatusDisplay, right_output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_members = {
  "status_display_msgs__msg",  // message namespace
  "StatusDisplay",  // message name
  6,  // number of fields
  sizeof(status_display_msgs__msg__StatusDisplay),
  status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_member_array,  // message members
  status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_init_function,  // function to initialize message memory (memory has to be allocated)
  status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_type_support_handle = {
  0,
  &status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_members,
  get_message_typesupport_handle_function,
  &status_display_msgs__msg__StatusDisplay__get_type_hash,
  &status_display_msgs__msg__StatusDisplay__get_type_description,
  &status_display_msgs__msg__StatusDisplay__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_status_display_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, status_display_msgs, msg, StatusDisplay)() {
  if (!status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_type_support_handle.typesupport_identifier) {
    status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &status_display_msgs__msg__StatusDisplay__rosidl_typesupport_introspection_c__StatusDisplay_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
