// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice

#include "ainex_interfaces/srv/detail/set_motion_params__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xf9, 0x1c, 0x92, 0x0b, 0x84, 0x10, 0x72,
      0x53, 0x62, 0xea, 0x5d, 0xf1, 0xa0, 0x22, 0x54,
      0x53, 0x03, 0x0a, 0xa1, 0x90, 0x97, 0x24, 0xac,
      0x31, 0xdc, 0x2c, 0x42, 0x36, 0x1f, 0x28, 0xa6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xcc, 0x35, 0x4b, 0xea, 0xf7, 0xdc, 0x40,
      0x07, 0x97, 0xff, 0x42, 0x4f, 0x91, 0x4f, 0xad,
      0xf7, 0xa2, 0x02, 0xa6, 0x95, 0xf1, 0x6f, 0x82,
      0xcd, 0xa7, 0x2f, 0x20, 0x41, 0x19, 0xa6, 0x3d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0xd4, 0x8c, 0x32, 0x7e, 0x62, 0x00, 0x61,
      0x91, 0xeb, 0xc4, 0xbd, 0x89, 0x11, 0xd1, 0x08,
      0x5c, 0x87, 0x82, 0x7b, 0xd8, 0x6a, 0xb0, 0x24,
      0xda, 0xff, 0x2b, 0x46, 0xac, 0x8a, 0x45, 0xa8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x89, 0x4f, 0x6a, 0x6c, 0x5a, 0x66, 0x0e,
      0xe7, 0x6e, 0x11, 0x9a, 0xe1, 0xae, 0x81, 0xa6,
      0x9c, 0x7c, 0xdf, 0x63, 0x95, 0xbf, 0xcf, 0x82,
      0x67, 0x93, 0x96, 0xba, 0x45, 0x3a, 0x0a, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char ainex_interfaces__srv__SetMotionParams__TYPE_NAME[] = "ainex_interfaces/srv/SetMotionParams";
static char ainex_interfaces__srv__SetMotionParams_Event__TYPE_NAME[] = "ainex_interfaces/srv/SetMotionParams_Event";
static char ainex_interfaces__srv__SetMotionParams_Request__TYPE_NAME[] = "ainex_interfaces/srv/SetMotionParams_Request";
static char ainex_interfaces__srv__SetMotionParams_Response__TYPE_NAME[] = "ainex_interfaces/srv/SetMotionParams_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ainex_interfaces__srv__SetMotionParams__FIELD_NAME__request_message[] = "request_message";
static char ainex_interfaces__srv__SetMotionParams__FIELD_NAME__response_message[] = "response_message";
static char ainex_interfaces__srv__SetMotionParams__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__SetMotionParams__FIELDS[] = {
  {
    {ainex_interfaces__srv__SetMotionParams__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__SetMotionParams_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__SetMotionParams_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__SetMotionParams_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ainex_interfaces__srv__SetMotionParams__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ainex_interfaces__srv__SetMotionParams_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Response__TYPE_NAME, 45, 45},
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
ainex_interfaces__srv__SetMotionParams__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__SetMotionParams__TYPE_NAME, 36, 36},
      {ainex_interfaces__srv__SetMotionParams__FIELDS, 3, 3},
    },
    {ainex_interfaces__srv__SetMotionParams__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ainex_interfaces__srv__SetMotionParams_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ainex_interfaces__srv__SetMotionParams_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ainex_interfaces__srv__SetMotionParams_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__speed[] = "speed";
static char ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__acceleration[] = "acceleration";
static char ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__step_degree[] = "step_degree";
static char ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__torque[] = "torque";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__SetMotionParams_Request__FIELDS[] = {
  {
    {ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__step_degree, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Request__FIELD_NAME__torque, 6, 6},
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
ainex_interfaces__srv__SetMotionParams_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__SetMotionParams_Request__TYPE_NAME, 44, 44},
      {ainex_interfaces__srv__SetMotionParams_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__SetMotionParams_Response__FIELD_NAME__success[] = "success";
static char ainex_interfaces__srv__SetMotionParams_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__SetMotionParams_Response__FIELDS[] = {
  {
    {ainex_interfaces__srv__SetMotionParams_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Response__FIELD_NAME__message, 7, 7},
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
ainex_interfaces__srv__SetMotionParams_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__SetMotionParams_Response__TYPE_NAME, 45, 45},
      {ainex_interfaces__srv__SetMotionParams_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__SetMotionParams_Event__FIELD_NAME__info[] = "info";
static char ainex_interfaces__srv__SetMotionParams_Event__FIELD_NAME__request[] = "request";
static char ainex_interfaces__srv__SetMotionParams_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__SetMotionParams_Event__FIELDS[] = {
  {
    {ainex_interfaces__srv__SetMotionParams_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ainex_interfaces__srv__SetMotionParams_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ainex_interfaces__srv__SetMotionParams_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ainex_interfaces__srv__SetMotionParams_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ainex_interfaces__srv__SetMotionParams_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__SetMotionParams_Response__TYPE_NAME, 45, 45},
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
ainex_interfaces__srv__SetMotionParams_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__SetMotionParams_Event__TYPE_NAME, 42, 42},
      {ainex_interfaces__srv__SetMotionParams_Event__FIELDS, 3, 3},
    },
    {ainex_interfaces__srv__SetMotionParams_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ainex_interfaces__srv__SetMotionParams_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ainex_interfaces__srv__SetMotionParams_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 speed\n"
  "int32 acceleration\n"
  "float32 step_degree\n"
  "bool torque\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__SetMotionParams__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 94, 94},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__SetMotionParams_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__SetMotionParams_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__SetMotionParams_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__SetMotionParams__get_individual_type_description_source(NULL),
    sources[1] = *ainex_interfaces__srv__SetMotionParams_Event__get_individual_type_description_source(NULL);
    sources[2] = *ainex_interfaces__srv__SetMotionParams_Request__get_individual_type_description_source(NULL);
    sources[3] = *ainex_interfaces__srv__SetMotionParams_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__SetMotionParams_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__SetMotionParams_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__SetMotionParams_Event__get_individual_type_description_source(NULL),
    sources[1] = *ainex_interfaces__srv__SetMotionParams_Request__get_individual_type_description_source(NULL);
    sources[2] = *ainex_interfaces__srv__SetMotionParams_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
