// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice

#include "status_display_msgs/msg/detail/status_display__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_status_display_msgs
const rosidl_type_hash_t *
status_display_msgs__msg__StatusDisplay__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x59, 0xe5, 0x0e, 0x01, 0xf8, 0x41, 0x30,
      0x2e, 0xa0, 0xad, 0x88, 0xae, 0xd5, 0x2b, 0x68,
      0x85, 0x64, 0xcf, 0x3e, 0x7d, 0x49, 0xa3, 0x58,
      0xea, 0x03, 0xdd, 0x74, 0x78, 0x95, 0x69, 0x30,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char status_display_msgs__msg__StatusDisplay__TYPE_NAME[] = "status_display_msgs/msg/StatusDisplay";

// Define type names, field names, and default values
static char status_display_msgs__msg__StatusDisplay__FIELD_NAME__left_setpoint[] = "left_setpoint";
static char status_display_msgs__msg__StatusDisplay__FIELD_NAME__left_velocity[] = "left_velocity";
static char status_display_msgs__msg__StatusDisplay__FIELD_NAME__left_output[] = "left_output";
static char status_display_msgs__msg__StatusDisplay__FIELD_NAME__right_setpoint[] = "right_setpoint";
static char status_display_msgs__msg__StatusDisplay__FIELD_NAME__right_velocity[] = "right_velocity";
static char status_display_msgs__msg__StatusDisplay__FIELD_NAME__right_output[] = "right_output";

static rosidl_runtime_c__type_description__Field status_display_msgs__msg__StatusDisplay__FIELDS[] = {
  {
    {status_display_msgs__msg__StatusDisplay__FIELD_NAME__left_setpoint, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {status_display_msgs__msg__StatusDisplay__FIELD_NAME__left_velocity, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {status_display_msgs__msg__StatusDisplay__FIELD_NAME__left_output, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {status_display_msgs__msg__StatusDisplay__FIELD_NAME__right_setpoint, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {status_display_msgs__msg__StatusDisplay__FIELD_NAME__right_velocity, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {status_display_msgs__msg__StatusDisplay__FIELD_NAME__right_output, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
status_display_msgs__msg__StatusDisplay__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {status_display_msgs__msg__StatusDisplay__TYPE_NAME, 37, 37},
      {status_display_msgs__msg__StatusDisplay__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 left_setpoint\n"
  "float64 left_velocity\n"
  "float64 left_output\n"
  "float64 right_setpoint\n"
  "float64 right_velocity\n"
  "float64 right_output";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
status_display_msgs__msg__StatusDisplay__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {status_display_msgs__msg__StatusDisplay__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
status_display_msgs__msg__StatusDisplay__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *status_display_msgs__msg__StatusDisplay__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
