// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ainex_interfaces:srv/RunGesture.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ainex_interfaces/srv/detail/run_gesture__functions.h"
#include "ainex_interfaces/srv/detail/run_gesture__struct.hpp"
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

typedef struct _RunGesture_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunGesture_Request_type_support_ids_t;

static const _RunGesture_Request_type_support_ids_t _RunGesture_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunGesture_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunGesture_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunGesture_Request_type_support_symbol_names_t _RunGesture_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, RunGesture_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, RunGesture_Request)),
  }
};

typedef struct _RunGesture_Request_type_support_data_t
{
  void * data[2];
} _RunGesture_Request_type_support_data_t;

static _RunGesture_Request_type_support_data_t _RunGesture_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunGesture_Request_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_RunGesture_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunGesture_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunGesture_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunGesture_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunGesture_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ainex_interfaces__srv__RunGesture_Request__get_type_hash,
  &ainex_interfaces__srv__RunGesture_Request__get_type_description,
  &ainex_interfaces__srv__RunGesture_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Request>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::RunGesture_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, RunGesture_Request)() {
  return get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Request>();
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
// #include "ainex_interfaces/srv/detail/run_gesture__functions.h"
// already included above
// #include "ainex_interfaces/srv/detail/run_gesture__struct.hpp"
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

typedef struct _RunGesture_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunGesture_Response_type_support_ids_t;

static const _RunGesture_Response_type_support_ids_t _RunGesture_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunGesture_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunGesture_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunGesture_Response_type_support_symbol_names_t _RunGesture_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, RunGesture_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, RunGesture_Response)),
  }
};

typedef struct _RunGesture_Response_type_support_data_t
{
  void * data[2];
} _RunGesture_Response_type_support_data_t;

static _RunGesture_Response_type_support_data_t _RunGesture_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunGesture_Response_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_RunGesture_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunGesture_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunGesture_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunGesture_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunGesture_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ainex_interfaces__srv__RunGesture_Response__get_type_hash,
  &ainex_interfaces__srv__RunGesture_Response__get_type_description,
  &ainex_interfaces__srv__RunGesture_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Response>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::RunGesture_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, RunGesture_Response)() {
  return get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Response>();
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
// #include "ainex_interfaces/srv/detail/run_gesture__functions.h"
// already included above
// #include "ainex_interfaces/srv/detail/run_gesture__struct.hpp"
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

typedef struct _RunGesture_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunGesture_Event_type_support_ids_t;

static const _RunGesture_Event_type_support_ids_t _RunGesture_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunGesture_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunGesture_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunGesture_Event_type_support_symbol_names_t _RunGesture_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, RunGesture_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, RunGesture_Event)),
  }
};

typedef struct _RunGesture_Event_type_support_data_t
{
  void * data[2];
} _RunGesture_Event_type_support_data_t;

static _RunGesture_Event_type_support_data_t _RunGesture_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunGesture_Event_message_typesupport_map = {
  2,
  "ainex_interfaces",
  &_RunGesture_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RunGesture_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RunGesture_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunGesture_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunGesture_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ainex_interfaces__srv__RunGesture_Event__get_type_hash,
  &ainex_interfaces__srv__RunGesture_Event__get_type_description,
  &ainex_interfaces__srv__RunGesture_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Event>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::RunGesture_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, RunGesture_Event)() {
  return get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Event>();
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
// #include "ainex_interfaces/srv/detail/run_gesture__struct.hpp"
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

typedef struct _RunGesture_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunGesture_type_support_ids_t;

static const _RunGesture_type_support_ids_t _RunGesture_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunGesture_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunGesture_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunGesture_type_support_symbol_names_t _RunGesture_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ainex_interfaces, srv, RunGesture)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ainex_interfaces, srv, RunGesture)),
  }
};

typedef struct _RunGesture_type_support_data_t
{
  void * data[2];
} _RunGesture_type_support_data_t;

static _RunGesture_type_support_data_t _RunGesture_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunGesture_service_typesupport_map = {
  2,
  "ainex_interfaces",
  &_RunGesture_service_typesupport_ids.typesupport_identifier[0],
  &_RunGesture_service_typesupport_symbol_names.symbol_name[0],
  &_RunGesture_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunGesture_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunGesture_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ainex_interfaces::srv::RunGesture_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ainex_interfaces::srv::RunGesture>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ainex_interfaces::srv::RunGesture>,
  &ainex_interfaces__srv__RunGesture__get_type_hash,
  &ainex_interfaces__srv__RunGesture__get_type_description,
  &ainex_interfaces__srv__RunGesture__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ainex_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ainex_interfaces::srv::RunGesture>()
{
  return &::ainex_interfaces::srv::rosidl_typesupport_cpp::RunGesture_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ainex_interfaces, srv, RunGesture)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ainex_interfaces::srv::RunGesture>();
}

#ifdef __cplusplus
}
#endif
