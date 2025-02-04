// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nav2_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

#include "nav2_msgs/srv/detail/manage_lifecycle_nodes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ManageLifecycleNodes__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0x50, 0xf4, 0xf6, 0x77, 0x25, 0x1b, 0xb8,
      0xf7, 0x74, 0x4e, 0x3c, 0x0a, 0x87, 0xef, 0x4f,
      0x66, 0xc2, 0x05, 0xe2, 0xf8, 0x74, 0x0a, 0x83,
      0x30, 0x25, 0x1a, 0xf7, 0xd1, 0x80, 0x44, 0x60,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ManageLifecycleNodes_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x78, 0x41, 0x75, 0x95, 0x75, 0xa5, 0x56,
      0x5b, 0x3d, 0x87, 0x9a, 0x58, 0xfd, 0x03, 0x5a,
      0x5a, 0x69, 0xe9, 0xfd, 0xf3, 0x36, 0x5c, 0x02,
      0xb3, 0x3c, 0xc9, 0xad, 0x03, 0xa7, 0xa2, 0x27,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ManageLifecycleNodes_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xb0, 0xdd, 0xcb, 0xe7, 0x30, 0x7a, 0xd8,
      0x9c, 0x08, 0x9d, 0x1a, 0x87, 0x49, 0x03, 0x09,
      0x29, 0xef, 0xc6, 0x3c, 0x22, 0xec, 0x50, 0x6f,
      0xaf, 0x11, 0x44, 0x0e, 0xc2, 0xf5, 0xc1, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
const rosidl_type_hash_t *
nav2_msgs__srv__ManageLifecycleNodes_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x94, 0xec, 0xa4, 0x3a, 0x9b, 0x17, 0x3a,
      0x41, 0xfd, 0x1a, 0xbb, 0x98, 0x9a, 0x06, 0x28,
      0xfe, 0x46, 0xd4, 0xa5, 0xfa, 0xec, 0xa6, 0x2d,
      0xdd, 0xe9, 0x78, 0x31, 0x2f, 0xfc, 0x21, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char nav2_msgs__srv__ManageLifecycleNodes__TYPE_NAME[] = "nav2_msgs/srv/ManageLifecycleNodes";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char nav2_msgs__srv__ManageLifecycleNodes_Event__TYPE_NAME[] = "nav2_msgs/srv/ManageLifecycleNodes_Event";
static char nav2_msgs__srv__ManageLifecycleNodes_Request__TYPE_NAME[] = "nav2_msgs/srv/ManageLifecycleNodes_Request";
static char nav2_msgs__srv__ManageLifecycleNodes_Response__TYPE_NAME[] = "nav2_msgs/srv/ManageLifecycleNodes_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char nav2_msgs__srv__ManageLifecycleNodes__FIELD_NAME__request_message[] = "request_message";
static char nav2_msgs__srv__ManageLifecycleNodes__FIELD_NAME__response_message[] = "response_message";
static char nav2_msgs__srv__ManageLifecycleNodes__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ManageLifecycleNodes__FIELDS[] = {
  {
    {nav2_msgs__srv__ManageLifecycleNodes__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__ManageLifecycleNodes_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__ManageLifecycleNodes_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {nav2_msgs__srv__ManageLifecycleNodes_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__ManageLifecycleNodes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__ManageLifecycleNodes__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ManageLifecycleNodes__TYPE_NAME, 34, 34},
      {nav2_msgs__srv__ManageLifecycleNodes__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__ManageLifecycleNodes__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = nav2_msgs__srv__ManageLifecycleNodes_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__srv__ManageLifecycleNodes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = nav2_msgs__srv__ManageLifecycleNodes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__ManageLifecycleNodes_Request__FIELD_NAME__command[] = "command";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ManageLifecycleNodes_Request__FIELDS[] = {
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Request__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__ManageLifecycleNodes_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ManageLifecycleNodes_Request__TYPE_NAME, 42, 42},
      {nav2_msgs__srv__ManageLifecycleNodes_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__ManageLifecycleNodes_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ManageLifecycleNodes_Response__FIELDS[] = {
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__ManageLifecycleNodes_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ManageLifecycleNodes_Response__TYPE_NAME, 43, 43},
      {nav2_msgs__srv__ManageLifecycleNodes_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char nav2_msgs__srv__ManageLifecycleNodes_Event__FIELD_NAME__info[] = "info";
static char nav2_msgs__srv__ManageLifecycleNodes_Event__FIELD_NAME__request[] = "request";
static char nav2_msgs__srv__ManageLifecycleNodes_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field nav2_msgs__srv__ManageLifecycleNodes_Event__FIELDS[] = {
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__ManageLifecycleNodes_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {nav2_msgs__srv__ManageLifecycleNodes_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nav2_msgs__srv__ManageLifecycleNodes_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {nav2_msgs__srv__ManageLifecycleNodes_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nav2_msgs__srv__ManageLifecycleNodes_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nav2_msgs__srv__ManageLifecycleNodes_Event__TYPE_NAME, 40, 40},
      {nav2_msgs__srv__ManageLifecycleNodes_Event__FIELDS, 3, 3},
    },
    {nav2_msgs__srv__ManageLifecycleNodes_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = nav2_msgs__srv__ManageLifecycleNodes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = nav2_msgs__srv__ManageLifecycleNodes_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 STARTUP = 0\n"
  "uint8 PAUSE = 1\n"
  "uint8 RESUME = 2\n"
  "uint8 RESET = 3\n"
  "uint8 SHUTDOWN = 4\n"
  "uint8 CONFIGURE = 5\n"
  "uint8 CLEANUP = 6\n"
  "\n"
  "uint8 command\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ManageLifecycleNodes__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ManageLifecycleNodes__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 156, 156},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ManageLifecycleNodes_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ManageLifecycleNodes_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ManageLifecycleNodes_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ManageLifecycleNodes_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
nav2_msgs__srv__ManageLifecycleNodes_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nav2_msgs__srv__ManageLifecycleNodes_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ManageLifecycleNodes__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ManageLifecycleNodes__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nav2_msgs__srv__ManageLifecycleNodes_Event__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__srv__ManageLifecycleNodes_Request__get_individual_type_description_source(NULL);
    sources[4] = *nav2_msgs__srv__ManageLifecycleNodes_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ManageLifecycleNodes_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ManageLifecycleNodes_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ManageLifecycleNodes_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ManageLifecycleNodes_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nav2_msgs__srv__ManageLifecycleNodes_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nav2_msgs__srv__ManageLifecycleNodes_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *nav2_msgs__srv__ManageLifecycleNodes_Request__get_individual_type_description_source(NULL);
    sources[3] = *nav2_msgs__srv__ManageLifecycleNodes_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
