// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ainex_interfaces/srv/detail/set_motion_params__functions.h"
#include "ainex_interfaces/srv/detail/set_motion_params__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetMotionParams_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionParams_Request_type_support_ids_t;

static const _SetMotionParams_Request_type_support_ids_t _SetMotionParams_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetMotionParams_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionParams_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionParams_Request_type_support_symbol_names_t _SetMotionParams_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, SetMotionParams_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, SetMotionParams_Request)),
  }
};

typedef struct _SetMotionParams_Request_type_support_data_t
{
  void * data[2];
} _SetMotionParams_Request_type_support_data_t;

static _SetMotionParams_Request_type_support_data_t _SetMotionParams_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionParams_Request_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_SetMotionParams_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotionParams_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotionParams_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotionParams_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionParams_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ainex_interfaces__srv__SetMotionParams_Request__get_type_hash,
  &ainex_interfaces__srv__SetMotionParams_Request__get_type_description,
  &ainex_interfaces__srv__SetMotionParams_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Request>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::SetMotionParams_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, SetMotionParams_Request)() {
  return get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ainex_interfaces/srv/detail/set_motion_params__functions.h"
// already included above
// #include "ainex_interfaces/srv/detail/set_motion_params__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetMotionParams_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionParams_Response_type_support_ids_t;

static const _SetMotionParams_Response_type_support_ids_t _SetMotionParams_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetMotionParams_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionParams_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionParams_Response_type_support_symbol_names_t _SetMotionParams_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, SetMotionParams_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, SetMotionParams_Response)),
  }
};

typedef struct _SetMotionParams_Response_type_support_data_t
{
  void * data[2];
} _SetMotionParams_Response_type_support_data_t;

static _SetMotionParams_Response_type_support_data_t _SetMotionParams_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionParams_Response_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_SetMotionParams_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotionParams_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotionParams_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotionParams_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionParams_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ainex_interfaces__srv__SetMotionParams_Response__get_type_hash,
  &ainex_interfaces__srv__SetMotionParams_Response__get_type_description,
  &ainex_interfaces__srv__SetMotionParams_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Response>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::SetMotionParams_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, SetMotionParams_Response)() {
  return get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ainex_interfaces/srv/detail/set_motion_params__functions.h"
// already included above
// #include "ainex_interfaces/srv/detail/set_motion_params__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetMotionParams_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionParams_Event_type_support_ids_t;

static const _SetMotionParams_Event_type_support_ids_t _SetMotionParams_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetMotionParams_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionParams_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionParams_Event_type_support_symbol_names_t _SetMotionParams_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, SetMotionParams_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, SetMotionParams_Event)),
  }
};

typedef struct _SetMotionParams_Event_type_support_data_t
{
  void * data[2];
} _SetMotionParams_Event_type_support_data_t;

static _SetMotionParams_Event_type_support_data_t _SetMotionParams_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionParams_Event_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_SetMotionParams_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotionParams_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotionParams_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotionParams_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionParams_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ainex_interfaces__srv__SetMotionParams_Event__get_type_hash,
  &ainex_interfaces__srv__SetMotionParams_Event__get_type_description,
  &ainex_interfaces__srv__SetMotionParams_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Event>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::SetMotionParams_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, SetMotionParams_Event)() {
  return get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ainex_interfaces/srv/detail/set_motion_params__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ainex_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetMotionParams_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionParams_type_support_ids_t;

static const _SetMotionParams_type_support_ids_t _SetMotionParams_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetMotionParams_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionParams_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionParams_type_support_symbol_names_t _SetMotionParams_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, SetMotionParams)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, SetMotionParams)),
  }
};

typedef struct _SetMotionParams_type_support_data_t
{
  void * data[2];
} _SetMotionParams_type_support_data_t;

static _SetMotionParams_type_support_data_t _SetMotionParams_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionParams_service_typesupport_map = {
  2,
  "ainex_interfaces",
  &_SetMotionParams_service_typesupport_ids.typesupport_identifier[0],
  &_SetMotionParams_service_typesupport_symbol_names.symbol_name[0],
  &_SetMotionParams_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetMotionParams_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionParams_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ainex_interfaces::srv::SetMotionParams_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ainex_interfaces::srv::SetMotionParams>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ainex_interfaces::srv::SetMotionParams>,
  &ainex_interfaces__srv__SetMotionParams__get_type_hash,
  &ainex_interfaces__srv__SetMotionParams__get_type_description,
  &ainex_interfaces__srv__SetMotionParams__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ainex_interfaces::srv::SetMotionParams>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::SetMotionParams_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, SetMotionParams)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ainex_interfaces::srv::SetMotionParams>();
}

#ifdef __cplusplus
}
#endif
