// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ainex_interfaces:srv/MoveHand.idl
// generated code does not contain a copyright notice

#include "ainex_interfaces/srv/detail/move_hand__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__MoveHand__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0xd1, 0xe2, 0x1e, 0x12, 0x4f, 0xac, 0xfc,
      0x0d, 0x9e, 0x3b, 0xce, 0x2a, 0xe5, 0xb5, 0x8a,
      0xd3, 0x2e, 0x07, 0x1a, 0x10, 0xc5, 0x72, 0x08,
      0x79, 0xc2, 0x2f, 0xe9, 0xb3, 0x96, 0x9b, 0x45,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__MoveHand_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xbf, 0xd5, 0xad, 0x91, 0x73, 0xad, 0x83,
      0x45, 0x8c, 0x7d, 0x00, 0x54, 0x25, 0x17, 0xad,
      0x82, 0xf1, 0x17, 0x40, 0xc6, 0xa9, 0xf8, 0xd8,
      0xd7, 0xfb, 0x95, 0x30, 0x5c, 0xdb, 0x95, 0x75,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__MoveHand_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0xde, 0x3a, 0x7b, 0x48, 0x1c, 0xa7, 0x49,
      0x88, 0x94, 0x5b, 0x2e, 0xf8, 0x89, 0x9b, 0x3b,
      0x81, 0xe2, 0x52, 0x9a, 0x84, 0x91, 0x02, 0x4d,
      0x4d, 0xee, 0x95, 0x0a, 0x34, 0x26, 0xe2, 0x45,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__MoveHand_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0xf8, 0xfc, 0x68, 0x14, 0x09, 0xf6, 0x01,
      0x5d, 0x8d, 0xf5, 0x00, 0xcb, 0xd0, 0x18, 0x80,
      0xaa, 0x5f, 0x5b, 0x80, 0x09, 0x53, 0xaa, 0x48,
      0x85, 0x12, 0x0c, 0x82, 0x18, 0xb0, 0xae, 0x7e,
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

static char ainex_interfaces__srv__MoveHand__TYPE_NAME[] = "ainex_interfaces/srv/MoveHand";
static char ainex_interfaces__srv__MoveHand_Event__TYPE_NAME[] = "ainex_interfaces/srv/MoveHand_Event";
static char ainex_interfaces__srv__MoveHand_Request__TYPE_NAME[] = "ainex_interfaces/srv/MoveHand_Request";
static char ainex_interfaces__srv__MoveHand_Response__TYPE_NAME[] = "ainex_interfaces/srv/MoveHand_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ainex_interfaces__srv__MoveHand__FIELD_NAME__request_message[] = "request_message";
static char ainex_interfaces__srv__MoveHand__FIELD_NAME__response_message[] = "response_message";
static char ainex_interfaces__srv__MoveHand__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__MoveHand__FIELDS[] = {
  {
    {ainex_interfaces__srv__MoveHand__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__MoveHand_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__MoveHand_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ainex_interfaces__srv__MoveHand_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ainex_interfaces__srv__MoveHand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ainex_interfaces__srv__MoveHand_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand_Response__TYPE_NAME, 38, 38},
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
ainex_interfaces__srv__MoveHand__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__MoveHand__TYPE_NAME, 29, 29},
      {ainex_interfaces__srv__MoveHand__FIELDS, 3, 3},
    },
    {ainex_interfaces__srv__MoveHand__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ainex_interfaces__srv__MoveHand_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ainex_interfaces__srv__MoveHand_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ainex_interfaces__srv__MoveHand_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__MoveHand_Request__FIELD_NAME__angles[] = "angles";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__MoveHand_Request__FIELDS[] = {
  {
    {ainex_interfaces__srv__MoveHand_Request__FIELD_NAME__angles, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__MoveHand_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__MoveHand_Request__TYPE_NAME, 37, 37},
      {ainex_interfaces__srv__MoveHand_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__MoveHand_Response__FIELD_NAME__success[] = "success";
static char ainex_interfaces__srv__MoveHand_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__MoveHand_Response__FIELDS[] = {
  {
    {ainex_interfaces__srv__MoveHand_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand_Response__FIELD_NAME__message, 7, 7},
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
ainex_interfaces__srv__MoveHand_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__MoveHand_Response__TYPE_NAME, 38, 38},
      {ainex_interfaces__srv__MoveHand_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ainex_interfaces__srv__MoveHand_Event__FIELD_NAME__info[] = "info";
static char ainex_interfaces__srv__MoveHand_Event__FIELD_NAME__request[] = "request";
static char ainex_interfaces__srv__MoveHand_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ainex_interfaces__srv__MoveHand_Event__FIELDS[] = {
  {
    {ainex_interfaces__srv__MoveHand_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ainex_interfaces__srv__MoveHand_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ainex_interfaces__srv__MoveHand_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ainex_interfaces__srv__MoveHand_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ainex_interfaces__srv__MoveHand_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ainex_interfaces__srv__MoveHand_Response__TYPE_NAME, 38, 38},
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
ainex_interfaces__srv__MoveHand_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ainex_interfaces__srv__MoveHand_Event__TYPE_NAME, 35, 35},
      {ainex_interfaces__srv__MoveHand_Event__FIELDS, 3, 3},
    },
    {ainex_interfaces__srv__MoveHand_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ainex_interfaces__srv__MoveHand_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ainex_interfaces__srv__MoveHand_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] angles\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__MoveHand__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__MoveHand__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__MoveHand_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__MoveHand_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__MoveHand_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__MoveHand_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__MoveHand_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ainex_interfaces__srv__MoveHand_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__MoveHand__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__MoveHand__get_individual_type_description_source(NULL),
    sources[1] = *ainex_interfaces__srv__MoveHand_Event__get_individual_type_description_source(NULL);
    sources[2] = *ainex_interfaces__srv__MoveHand_Request__get_individual_type_description_source(NULL);
    sources[3] = *ainex_interfaces__srv__MoveHand_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__MoveHand_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__MoveHand_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__MoveHand_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__MoveHand_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__MoveHand_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ainex_interfaces__srv__MoveHand_Event__get_individual_type_description_source(NULL),
    sources[1] = *ainex_interfaces__srv__MoveHand_Request__get_individual_type_description_source(NULL);
    sources[2] = *ainex_interfaces__srv__MoveHand_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
