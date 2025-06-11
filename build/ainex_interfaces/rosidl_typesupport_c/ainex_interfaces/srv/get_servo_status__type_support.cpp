// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ainex_interfaces:srv/GetServoStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ainex_interfaces/srv/detail/get_servo_status__struct.h"
#include "ainex_interfaces/srv/detail/get_servo_status__type_support.h"
#include "ainex_interfaces/srv/detail/get_servo_status__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetServoStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetServoStatus_Request_type_support_ids_t;

static const _GetServoStatus_Request_type_support_ids_t _GetServoStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetServoStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetServoStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetServoStatus_Request_type_support_symbol_names_t _GetServoStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ainex_interfaces, srv, GetServoStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, GetServoStatus_Request)),
  }
};

typedef struct _GetServoStatus_Request_type_support_data_t
{
  void * data[2];
} _GetServoStatus_Request_type_support_data_t;

static _GetServoStatus_Request_type_support_data_t _GetServoStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetServoStatus_Request_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_GetServoStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetServoStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetServoStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetServoStatus_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetServoStatus_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ainex_interfaces__srv__GetServoStatus_Request__get_type_hash,
  &ainex_interfaces__srv__GetServoStatus_Request__get_type_description,
  &ainex_interfaces__srv__GetServoStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ainex_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ainex_interfaces, srv, GetServoStatus_Request)() {
  return &::ainex_interfaces::srv::rosidl_typesupport_c::GetServoStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ainex_interfaces/srv/detail/get_servo_status__struct.h"
// already included above
// #include "ainex_interfaces/srv/detail/get_servo_status__type_support.h"
// already included above
// #include "ainex_interfaces/srv/detail/get_servo_status__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetServoStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetServoStatus_Response_type_support_ids_t;

static const _GetServoStatus_Response_type_support_ids_t _GetServoStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetServoStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetServoStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetServoStatus_Response_type_support_symbol_names_t _GetServoStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ainex_interfaces, srv, GetServoStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, GetServoStatus_Response)),
  }
};

typedef struct _GetServoStatus_Response_type_support_data_t
{
  void * data[2];
} _GetServoStatus_Response_type_support_data_t;

static _GetServoStatus_Response_type_support_data_t _GetServoStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetServoStatus_Response_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_GetServoStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetServoStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetServoStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetServoStatus_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetServoStatus_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ainex_interfaces__srv__GetServoStatus_Response__get_type_hash,
  &ainex_interfaces__srv__GetServoStatus_Response__get_type_description,
  &ainex_interfaces__srv__GetServoStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ainex_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ainex_interfaces, srv, GetServoStatus_Response)() {
  return &::ainex_interfaces::srv::rosidl_typesupport_c::GetServoStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ainex_interfaces/srv/detail/get_servo_status__struct.h"
// already included above
// #include "ainex_interfaces/srv/detail/get_servo_status__type_support.h"
// already included above
// #include "ainex_interfaces/srv/detail/get_servo_status__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetServoStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetServoStatus_Event_type_support_ids_t;

static const _GetServoStatus_Event_type_support_ids_t _GetServoStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetServoStatus_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetServoStatus_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetServoStatus_Event_type_support_symbol_names_t _GetServoStatus_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ainex_interfaces, srv, GetServoStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, GetServoStatus_Event)),
  }
};

typedef struct _GetServoStatus_Event_type_support_data_t
{
  void * data[2];
} _GetServoStatus_Event_type_support_data_t;

static _GetServoStatus_Event_type_support_data_t _GetServoStatus_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetServoStatus_Event_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_GetServoStatus_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetServoStatus_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetServoStatus_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetServoStatus_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetServoStatus_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ainex_interfaces__srv__GetServoStatus_Event__get_type_hash,
  &ainex_interfaces__srv__GetServoStatus_Event__get_type_description,
  &ainex_interfaces__srv__GetServoStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ainex_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ainex_interfaces, srv, GetServoStatus_Event)() {
  return &::ainex_interfaces::srv::rosidl_typesupport_c::GetServoStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ainex_interfaces/srv/detail/get_servo_status__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetServoStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetServoStatus_type_support_ids_t;

static const _GetServoStatus_type_support_ids_t _GetServoStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetServoStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetServoStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetServoStatus_type_support_symbol_names_t _GetServoStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ainex_interfaces, srv, GetServoStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, GetServoStatus)),
  }
};

typedef struct _GetServoStatus_type_support_data_t
{
  void * data[2];
} _GetServoStatus_type_support_data_t;

static _GetServoStatus_type_support_data_t _GetServoStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetServoStatus_service_typesupport_map = {
  2,
  "ainex_interfaces",
  &_GetServoStatus_service_typesupport_ids.typesupport_identifier[0],
  &_GetServoStatus_service_typesupport_symbol_names.symbol_name[0],
  &_GetServoStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetServoStatus_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetServoStatus_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetServoStatus_Request_message_type_support_handle,
  &GetServoStatus_Response_message_type_support_handle,
  &GetServoStatus_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ainex_interfaces,
    srv,
    GetServoStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ainex_interfaces,
    srv,
    GetServoStatus
  ),
  &ainex_interfaces__srv__GetServoStatus__get_type_hash,
  &ainex_interfaces__srv__GetServoStatus__get_type_description,
  &ainex_interfaces__srv__GetServoStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ainex_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ainex_interfaces, srv, GetServoStatus)() {
  return &::ainex_interfaces::srv::rosidl_typesupport_c::GetServoStatus_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
