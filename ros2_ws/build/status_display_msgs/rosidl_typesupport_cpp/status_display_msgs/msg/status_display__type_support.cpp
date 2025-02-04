// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "status_display_msgs/msg/detail/status_display__functions.h"
#include "status_display_msgs/msg/detail/status_display__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace status_display_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _StatusDisplay_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StatusDisplay_type_support_ids_t;

static const _StatusDisplay_type_support_ids_t _StatusDisplay_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StatusDisplay_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StatusDisplay_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StatusDisplay_type_support_symbol_names_t _StatusDisplay_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, status_display_msgs, msg, StatusDisplay)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, status_display_msgs, msg, StatusDisplay)),
  }
};

typedef struct _StatusDisplay_type_support_data_t
{
  void * data[2];
} _StatusDisplay_type_support_data_t;

static _StatusDisplay_type_support_data_t _StatusDisplay_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StatusDisplay_message_typesupport_map = {
  2,
  "status_display_msgs",
  &_StatusDisplay_message_typesupport_ids.typesupport_identifier[0],
  &_StatusDisplay_message_typesupport_symbol_names.symbol_name[0],
  &_StatusDisplay_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StatusDisplay_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StatusDisplay_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &status_display_msgs__msg__StatusDisplay__get_type_hash,
  &status_display_msgs__msg__StatusDisplay__get_type_description,
  &status_display_msgs__msg__StatusDisplay__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace status_display_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<status_display_msgs::msg::StatusDisplay>()
{
  return &::status_display_msgs::msg::rosidl_typesupport_cpp::StatusDisplay_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, status_display_msgs, msg, StatusDisplay)() {
  return get_message_type_support_handle<status_display_msgs::msg::StatusDisplay>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
