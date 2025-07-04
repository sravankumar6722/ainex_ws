// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ainex_interfaces:srv/GetServoStatus.idl
// generated code does not contain a copyright notice

#include "ainex_interfaces/srv/detail/get_servo_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__GetServoStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x72, 0x1b, 0x46, 0x82, 0xaa, 0xc7, 0x65,
      0xcf, 0xc4, 0xc2, 0xbf, 0x47, 0xe3, 0x27, 0x67,
      0x60, 0x5d, 0x52, 0xcd, 0xf3, 0xd5, 0xd7, 0x0f,
      0x06, 0xfe, 0x05, 0x29, 0x50, 0xc1, 0x87, 0xa4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__GetServoStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0xcb, 0x73, 0x23, 0x70, 0x8d, 0x68, 0x07,
      0x5b, 0x72, 0xbf, 0x59, 0x50, 0x5e, 0x79, 0x5e,
      0x4f, 0xdf, 0x0c, 0xe1, 0xf3, 0x1d, 0x7a, 0x2f,
      0x43, 0x20, 0x71, 0x6e, 0xc3, 0x2d, 0x02, 0xd9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__GetServoStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x2d, 0xe6, 0xee, 0x95, 0x79, 0x8a, 0xc1,
      0xf1, 0x72, 0x8b, 0x23, 0xa5, 0x3c, 0x57, 0x9b,
      0xc4, 0xe5, 0x32, 0xe6, 0xca, 0x71, 0x30, 0x2b,
      0x48, 0x8a, 0x97, 0x48, 0x77, 0xeb, 0x39, 0xe3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__GetServoStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x82, 0x45, 0x74, 0x20, 0xc6, 0xf1, 0xa0,
      0xeb, 0xba, 0x19, 0xde, 0xc7, 0x4d, 0x91, 0x5e,
      0x40, 0xeb, 0xab, 0xcc, 0xc9, 0x73, 0x47, 0x53,
      0x51, 0x5c, 0xfc, 0x1d, 0x62, 0x97, 0xac, 0x53,
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

static char ainex_interfaces__srv__GetServoStatus__TYPE_NAME[] = "ainex_interfaces/srv/GetServoStatus";
static char ainex_interfaces__srv__GetServoStatus_Event__TYPE_NAME[] = "ainex_interfaces/srv/GetServoStatus_Event";
static char ainex_interfaces__srv__GetServoStatus_Request__TYPE_NAME[] = "ainex_interfaces/srv/GetServoStatus_Request";
static char ainex_interfaces__srv__GetServoStatus_Response__TYPE_NAME[] = "ainex_interfaces/srv/GetServoStatus_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ainex_interfaces__srv__GetServoStatus__FIELD_NAME__request_message[] = "request_message";
static char ainex_interfaces__srv__GetServoStatus__FIELD_NAME__response_message[] = "response_message";
static char ainex_interfaces__srv__GetServoStatus__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__GetServoStatus__FIELDS[] = {
  {
    {ainex_interfaces__srv__GetServoStatus__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__GetServoStatus_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__GetServoStatus_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__GetServoStatus_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ainex_interfaces__srv__GetServoStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ainex_interfaces__srv__GetServoStatus_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__GetServoStatus__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__GetServoStatus__TYPE_NAME, 35, 35},
      {ainex_interfaces__srv__GetServoStatus__FIELDS, 3, 3},
    },
    {ainex_interfaces__srv__GetServoStatus__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ainex_interfaces__srv__GetServoStatus_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ainex_interfaces__srv__GetServoStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ainex_interfaces__srv__GetServoStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__GetServoStatus_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__GetServoStatus_Request__FIELDS[] = {
  {
    {ainex_interfaces__srv__GetServoStatus_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
ainex_interfaces__srv__GetServoStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__GetServoStatus_Request__TYPE_NAME, 43, 43},
      {ainex_interfaces__srv__GetServoStatus_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__angles[] = "angles";
static char ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__raw_positions[] = "raw_positions";
static char ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__success[] = "success";
static char ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__GetServoStatus_Response__FIELDS[] = {
  {
    {ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__angles, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__raw_positions, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__GetServoStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__GetServoStatus_Response__TYPE_NAME, 44, 44},
      {ainex_interfaces__srv__GetServoStatus_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__GetServoStatus_Event__FIELD_NAME__info[] = "info";
static char ainex_interfaces__srv__GetServoStatus_Event__FIELD_NAME__request[] = "request";
static char ainex_interfaces__srv__GetServoStatus_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__GetServoStatus_Event__FIELDS[] = {
  {
    {ainex_interfaces__srv__GetServoStatus_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ainex_interfaces__srv__GetServoStatus_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ainex_interfaces__srv__GetServoStatus_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ainex_interfaces__srv__GetServoStatus_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ainex_interfaces__srv__GetServoStatus_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__GetServoStatus_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__GetServoStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__GetServoStatus_Event__TYPE_NAME, 41, 41},
      {ainex_interfaces__srv__GetServoStatus_Event__FIELDS, 3, 3},
    },
    {ainex_interfaces__srv__GetServoStatus_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ainex_interfaces__srv__GetServoStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ainex_interfaces__srv__GetServoStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "float32[] angles\n"
  "int32[] raw_positions\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__GetServoStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__GetServoStatus__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__GetServoStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__GetServoStatus_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__GetServoStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__GetServoStatus_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__GetServoStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__GetServoStatus_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__GetServoStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__GetServoStatus__get_individual_type_description_source(NULL),
    sources[1] = *ainex_interfaces__srv__GetServoStatus_Event__get_individual_type_description_source(NULL);
    sources[2] = *ainex_interfaces__srv__GetServoStatus_Request__get_individual_type_description_source(NULL);
    sources[3] = *ainex_interfaces__srv__GetServoStatus_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__GetServoStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__GetServoStatus_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__GetServoStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__GetServoStatus_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__GetServoStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__GetServoStatus_Event__get_individual_type_description_source(NULL),
    sources[1] = *ainex_interfaces__srv__GetServoStatus_Request__get_individual_type_description_source(NULL);
    sources[2] = *ainex_interfaces__srv__GetServoStatus_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
