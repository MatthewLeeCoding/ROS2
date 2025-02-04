// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:action/DummyBehavior.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/action/detail/dummy_behavior__functions.h"
#include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `command`
#include "std_msgs/msg/string.h"
// Member `command`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_Goal__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_Goal, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_Goal",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_Goal),
  nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_Goal__get_type_hash,
  &nav2_msgs__action__DummyBehavior_Goal__get_type_description,
  &nav2_msgs__action__DummyBehavior_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_Goal)() {
  nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_Goal__rosidl_typesupport_introspection_c__DummyBehavior_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `total_elapsed_time`
#include "builtin_interfaces/msg/duration.h"
// Member `total_elapsed_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_Result__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_member_array[2] = {
  {
    "total_elapsed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_Result, total_elapsed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_Result",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_Result),
  nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_Result__get_type_hash,
  &nav2_msgs__action__DummyBehavior_Result__get_type_description,
  &nav2_msgs__action__DummyBehavior_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_Result)() {
  nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_Result__rosidl_typesupport_introspection_c__DummyBehavior_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_Feedback__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_Feedback",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_Feedback),
  nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_Feedback__get_type_hash,
  &nav2_msgs__action__DummyBehavior_Feedback__get_type_description,
  &nav2_msgs__action__DummyBehavior_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_Feedback)() {
  if (!nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_Feedback__rosidl_typesupport_introspection_c__DummyBehavior_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nav2_msgs/action/dummy_behavior.h"
// Member `goal`
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_SendGoal_Request__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_SendGoal_Request),
  nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_SendGoal_Request__get_type_hash,
  &nav2_msgs__action__DummyBehavior_SendGoal_Request__get_type_description,
  &nav2_msgs__action__DummyBehavior_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Request)() {
  nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_Goal)();
  if (!nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_SendGoal_Response__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_SendGoal_Response),
  nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_SendGoal_Response__get_type_hash,
  &nav2_msgs__action__DummyBehavior_SendGoal_Response__get_type_description,
  &nav2_msgs__action__DummyBehavior_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Response)() {
  nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "nav2_msgs/action/dummy_behavior.h"
// Member `request`
// Member `response`
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_SendGoal_Event__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Event__fini(message_memory);
}

size_t nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_SendGoal_Event__request(
  const void * untyped_member)
{
  const nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence * member =
    (nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav2_msgs__action__DummyBehavior_SendGoal_Request * item =
    ((const nav2_msgs__action__DummyBehavior_SendGoal_Request *)
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_SendGoal_Event__request(untyped_member, index));
  nav2_msgs__action__DummyBehavior_SendGoal_Request * value =
    (nav2_msgs__action__DummyBehavior_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Request * item =
    ((nav2_msgs__action__DummyBehavior_SendGoal_Request *)
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_SendGoal_Event__request(untyped_member, index));
  const nav2_msgs__action__DummyBehavior_SendGoal_Request * value =
    (const nav2_msgs__action__DummyBehavior_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence * member =
    (nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence *)(untyped_member);
  nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence__fini(member);
  return nav2_msgs__action__DummyBehavior_SendGoal_Request__Sequence__init(member, size);
}

size_t nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_SendGoal_Event__response(
  const void * untyped_member)
{
  const nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence * member =
    (nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav2_msgs__action__DummyBehavior_SendGoal_Response * item =
    ((const nav2_msgs__action__DummyBehavior_SendGoal_Response *)
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_SendGoal_Event__response(untyped_member, index));
  nav2_msgs__action__DummyBehavior_SendGoal_Response * value =
    (nav2_msgs__action__DummyBehavior_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Response * item =
    ((nav2_msgs__action__DummyBehavior_SendGoal_Response *)
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_SendGoal_Event__response(untyped_member, index));
  const nav2_msgs__action__DummyBehavior_SendGoal_Response * value =
    (const nav2_msgs__action__DummyBehavior_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence * member =
    (nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence *)(untyped_member);
  nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence__fini(member);
  return nav2_msgs__action__DummyBehavior_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_SendGoal_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_SendGoal_Event__request,  // size() function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_SendGoal_Event__request,  // get_const(index) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_SendGoal_Event__request,  // get(index) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_SendGoal_Event__request,  // fetch(index, &value) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_SendGoal_Event__request,  // assign(index, value) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_SendGoal_Event__response,  // size() function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_SendGoal_Event__response,  // get_const(index) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_SendGoal_Event__response,  // get(index) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_SendGoal_Event__response,  // fetch(index, &value) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_SendGoal_Event__response,  // assign(index, value) function pointer
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_SendGoal_Event),
  nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_SendGoal_Event__get_type_hash,
  &nav2_msgs__action__DummyBehavior_SendGoal_Event__get_type_description,
  &nav2_msgs__action__DummyBehavior_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Event)() {
  nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Request)();
  nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Response)();
  if (!nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_service_members = {
  "nav2_msgs__action",  // service namespace
  "DummyBehavior_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_SendGoal_Request__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Request_message_type_support_handle,
  &nav2_msgs__action__DummyBehavior_SendGoal_Response__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Response_message_type_support_handle,
  &nav2_msgs__action__DummyBehavior_SendGoal_Event__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    action,
    DummyBehavior_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    action,
    DummyBehavior_SendGoal
  ),
  &nav2_msgs__action__DummyBehavior_SendGoal__get_type_hash,
  &nav2_msgs__action__DummyBehavior_SendGoal__get_type_description,
  &nav2_msgs__action__DummyBehavior_SendGoal__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal)() {
  if (!nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_SendGoal_Event)()->data;
  }

  return &nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_GetResult_Request__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_GetResult_Request),
  nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_GetResult_Request__get_type_hash,
  &nav2_msgs__action__DummyBehavior_GetResult_Request__get_type_description,
  &nav2_msgs__action__DummyBehavior_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Request)() {
  nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_msgs/action/dummy_behavior.h"
// Member `result`
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_GetResult_Response__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_GetResult_Response),
  nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_GetResult_Response__get_type_hash,
  &nav2_msgs__action__DummyBehavior_GetResult_Response__get_type_description,
  &nav2_msgs__action__DummyBehavior_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Response)() {
  nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_Result)();
  if (!nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "nav2_msgs/action/dummy_behavior.h"
// Member `request`
// Member `response`
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_GetResult_Event__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_GetResult_Event__fini(message_memory);
}

size_t nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_GetResult_Event__request(
  const void * untyped_member)
{
  const nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence * member =
    (nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav2_msgs__action__DummyBehavior_GetResult_Request * item =
    ((const nav2_msgs__action__DummyBehavior_GetResult_Request *)
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_GetResult_Event__request(untyped_member, index));
  nav2_msgs__action__DummyBehavior_GetResult_Request * value =
    (nav2_msgs__action__DummyBehavior_GetResult_Request *)(untyped_value);
  *value = *item;
}

void nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav2_msgs__action__DummyBehavior_GetResult_Request * item =
    ((nav2_msgs__action__DummyBehavior_GetResult_Request *)
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_GetResult_Event__request(untyped_member, index));
  const nav2_msgs__action__DummyBehavior_GetResult_Request * value =
    (const nav2_msgs__action__DummyBehavior_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence * member =
    (nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence *)(untyped_member);
  nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence__fini(member);
  return nav2_msgs__action__DummyBehavior_GetResult_Request__Sequence__init(member, size);
}

size_t nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_GetResult_Event__response(
  const void * untyped_member)
{
  const nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence * member =
    (const nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence * member =
    (nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav2_msgs__action__DummyBehavior_GetResult_Response * item =
    ((const nav2_msgs__action__DummyBehavior_GetResult_Response *)
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_GetResult_Event__response(untyped_member, index));
  nav2_msgs__action__DummyBehavior_GetResult_Response * value =
    (nav2_msgs__action__DummyBehavior_GetResult_Response *)(untyped_value);
  *value = *item;
}

void nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav2_msgs__action__DummyBehavior_GetResult_Response * item =
    ((nav2_msgs__action__DummyBehavior_GetResult_Response *)
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_GetResult_Event__response(untyped_member, index));
  const nav2_msgs__action__DummyBehavior_GetResult_Response * value =
    (const nav2_msgs__action__DummyBehavior_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence * member =
    (nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence *)(untyped_member);
  nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence__fini(member);
  return nav2_msgs__action__DummyBehavior_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_GetResult_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_GetResult_Event__request,  // size() function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_GetResult_Event__request,  // get_const(index) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_GetResult_Event__request,  // get(index) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_GetResult_Event__request,  // fetch(index, &value) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_GetResult_Event__request,  // assign(index, value) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__size_function__DummyBehavior_GetResult_Event__response,  // size() function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__DummyBehavior_GetResult_Event__response,  // get_const(index) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__get_function__DummyBehavior_GetResult_Event__response,  // get(index) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__DummyBehavior_GetResult_Event__response,  // fetch(index, &value) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__DummyBehavior_GetResult_Event__response,  // assign(index, value) function pointer
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__DummyBehavior_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_GetResult_Event),
  nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_GetResult_Event__get_type_hash,
  &nav2_msgs__action__DummyBehavior_GetResult_Event__get_type_description,
  &nav2_msgs__action__DummyBehavior_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Event)() {
  nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Request)();
  nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Response)();
  if (!nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_service_members = {
  "nav2_msgs__action",  // service namespace
  "DummyBehavior_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_service_type_support_handle = {
  0,
  &nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_service_members,
  get_service_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_GetResult_Request__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Request_message_type_support_handle,
  &nav2_msgs__action__DummyBehavior_GetResult_Response__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Response_message_type_support_handle,
  &nav2_msgs__action__DummyBehavior_GetResult_Event__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    action,
    DummyBehavior_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav2_msgs,
    action,
    DummyBehavior_GetResult
  ),
  &nav2_msgs__action__DummyBehavior_GetResult__get_type_hash,
  &nav2_msgs__action__DummyBehavior_GetResult__get_type_description,
  &nav2_msgs__action__DummyBehavior_GetResult__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult)() {
  if (!nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_service_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_GetResult_Event)()->data;
  }

  return &nav2_msgs__action__detail__dummy_behavior__rosidl_typesupport_introspection_c__DummyBehavior_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__functions.h"
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/dummy_behavior.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/detail/dummy_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__action__DummyBehavior_FeedbackMessage__init(message_memory);
}

void nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_fini_function(void * message_memory)
{
  nav2_msgs__action__DummyBehavior_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__action__DummyBehavior_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_members = {
  "nav2_msgs__action",  // message namespace
  "DummyBehavior_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nav2_msgs__action__DummyBehavior_FeedbackMessage),
  nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_member_array,  // message members
  nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_type_support_handle = {
  0,
  &nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &nav2_msgs__action__DummyBehavior_FeedbackMessage__get_type_hash,
  &nav2_msgs__action__DummyBehavior_FeedbackMessage__get_type_description,
  &nav2_msgs__action__DummyBehavior_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_FeedbackMessage)() {
  nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, action, DummyBehavior_Feedback)();
  if (!nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__action__DummyBehavior_FeedbackMessage__rosidl_typesupport_introspection_c__DummyBehavior_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
