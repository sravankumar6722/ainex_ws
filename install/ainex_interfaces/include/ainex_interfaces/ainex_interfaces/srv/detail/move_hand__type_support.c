// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ainex_interfaces:srv/MoveHand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ainex_interfaces/srv/detail/move_hand__rosidl_typesupport_introspection_c.h"
#include "ainex_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ainex_interfaces/srv/detail/move_hand__functions.h"
#include "ainex_interfaces/srv/detail/move_hand__struct.h"


// Include directives for member types
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ainex_interfaces__srv__MoveHand_Request__init(message_memory);
}

void ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_fini_function(void * message_memory)
{
  ainex_interfaces__srv__MoveHand_Request__fini(message_memory);
}

size_t ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__size_function__MoveHand_Request__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Request__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__get_function__MoveHand_Request__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__fetch_function__MoveHand_Request__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Request__angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__assign_function__MoveHand_Request__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__get_function__MoveHand_Request__angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__resize_function__MoveHand_Request__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_member_array[1] = {
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ainex_interfaces__srv__MoveHand_Request, angles),  // bytes offset in struct
    NULL,  // default value
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__size_function__MoveHand_Request__angles,  // size() function pointer
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Request__angles,  // get_const(index) function pointer
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__get_function__MoveHand_Request__angles,  // get(index) function pointer
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__fetch_function__MoveHand_Request__angles,  // fetch(index, &value) function pointer
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__assign_function__MoveHand_Request__angles,  // assign(index, value) function pointer
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__resize_function__MoveHand_Request__angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_members = {
  "ainex_interfaces__srv",  // message namespace
  "MoveHand_Request",  // message name
  1,  // number of fields
  sizeof(ainex_interfaces__srv__MoveHand_Request),
  false,  // has_any_key_member_
  ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_member_array,  // message members
  ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_type_support_handle = {
  0,
  &ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_members,
  get_message_typesupport_handle_function,
  &ainex_interfaces__srv__MoveHand_Request__get_type_hash,
  &ainex_interfaces__srv__MoveHand_Request__get_type_description,
  &ainex_interfaces__srv__MoveHand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ainex_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Request)() {
  if (!ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_type_support_handle.typesupport_identifier) {
    ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ainex_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__functions.h"
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ainex_interfaces__srv__MoveHand_Response__init(message_memory);
}

void ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_fini_function(void * message_memory)
{
  ainex_interfaces__srv__MoveHand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ainex_interfaces__srv__MoveHand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ainex_interfaces__srv__MoveHand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_members = {
  "ainex_interfaces__srv",  // message namespace
  "MoveHand_Response",  // message name
  2,  // number of fields
  sizeof(ainex_interfaces__srv__MoveHand_Response),
  false,  // has_any_key_member_
  ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_member_array,  // message members
  ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_type_support_handle = {
  0,
  &ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_members,
  get_message_typesupport_handle_function,
  &ainex_interfaces__srv__MoveHand_Response__get_type_hash,
  &ainex_interfaces__srv__MoveHand_Response__get_type_description,
  &ainex_interfaces__srv__MoveHand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ainex_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Response)() {
  if (!ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_type_support_handle.typesupport_identifier) {
    ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ainex_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__functions.h"
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ainex_interfaces/srv/move_hand.h"
// Member `request`
// Member `response`
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ainex_interfaces__srv__MoveHand_Event__init(message_memory);
}

void ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_fini_function(void * message_memory)
{
  ainex_interfaces__srv__MoveHand_Event__fini(message_memory);
}

size_t ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__size_function__MoveHand_Event__request(
  const void * untyped_member)
{
  const ainex_interfaces__srv__MoveHand_Request__Sequence * member =
    (const ainex_interfaces__srv__MoveHand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Event__request(
  const void * untyped_member, size_t index)
{
  const ainex_interfaces__srv__MoveHand_Request__Sequence * member =
    (const ainex_interfaces__srv__MoveHand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_function__MoveHand_Event__request(
  void * untyped_member, size_t index)
{
  ainex_interfaces__srv__MoveHand_Request__Sequence * member =
    (ainex_interfaces__srv__MoveHand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__fetch_function__MoveHand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ainex_interfaces__srv__MoveHand_Request * item =
    ((const ainex_interfaces__srv__MoveHand_Request *)
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Event__request(untyped_member, index));
  ainex_interfaces__srv__MoveHand_Request * value =
    (ainex_interfaces__srv__MoveHand_Request *)(untyped_value);
  *value = *item;
}

void ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__assign_function__MoveHand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ainex_interfaces__srv__MoveHand_Request * item =
    ((ainex_interfaces__srv__MoveHand_Request *)
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_function__MoveHand_Event__request(untyped_member, index));
  const ainex_interfaces__srv__MoveHand_Request * value =
    (const ainex_interfaces__srv__MoveHand_Request *)(untyped_value);
  *item = *value;
}

bool ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__resize_function__MoveHand_Event__request(
  void * untyped_member, size_t size)
{
  ainex_interfaces__srv__MoveHand_Request__Sequence * member =
    (ainex_interfaces__srv__MoveHand_Request__Sequence *)(untyped_member);
  ainex_interfaces__srv__MoveHand_Request__Sequence__fini(member);
  return ainex_interfaces__srv__MoveHand_Request__Sequence__init(member, size);
}

size_t ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__size_function__MoveHand_Event__response(
  const void * untyped_member)
{
  const ainex_interfaces__srv__MoveHand_Response__Sequence * member =
    (const ainex_interfaces__srv__MoveHand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Event__response(
  const void * untyped_member, size_t index)
{
  const ainex_interfaces__srv__MoveHand_Response__Sequence * member =
    (const ainex_interfaces__srv__MoveHand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_function__MoveHand_Event__response(
  void * untyped_member, size_t index)
{
  ainex_interfaces__srv__MoveHand_Response__Sequence * member =
    (ainex_interfaces__srv__MoveHand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__fetch_function__MoveHand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ainex_interfaces__srv__MoveHand_Response * item =
    ((const ainex_interfaces__srv__MoveHand_Response *)
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Event__response(untyped_member, index));
  ainex_interfaces__srv__MoveHand_Response * value =
    (ainex_interfaces__srv__MoveHand_Response *)(untyped_value);
  *value = *item;
}

void ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__assign_function__MoveHand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ainex_interfaces__srv__MoveHand_Response * item =
    ((ainex_interfaces__srv__MoveHand_Response *)
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_function__MoveHand_Event__response(untyped_member, index));
  const ainex_interfaces__srv__MoveHand_Response * value =
    (const ainex_interfaces__srv__MoveHand_Response *)(untyped_value);
  *item = *value;
}

bool ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__resize_function__MoveHand_Event__response(
  void * untyped_member, size_t size)
{
  ainex_interfaces__srv__MoveHand_Response__Sequence * member =
    (ainex_interfaces__srv__MoveHand_Response__Sequence *)(untyped_member);
  ainex_interfaces__srv__MoveHand_Response__Sequence__fini(member);
  return ainex_interfaces__srv__MoveHand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ainex_interfaces__srv__MoveHand_Event, info),  // bytes offset in struct
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
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ainex_interfaces__srv__MoveHand_Event, request),  // bytes offset in struct
    NULL,  // default value
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__size_function__MoveHand_Event__request,  // size() function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Event__request,  // get_const(index) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_function__MoveHand_Event__request,  // get(index) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__fetch_function__MoveHand_Event__request,  // fetch(index, &value) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__assign_function__MoveHand_Event__request,  // assign(index, value) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__resize_function__MoveHand_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ainex_interfaces__srv__MoveHand_Event, response),  // bytes offset in struct
    NULL,  // default value
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__size_function__MoveHand_Event__response,  // size() function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_const_function__MoveHand_Event__response,  // get_const(index) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__get_function__MoveHand_Event__response,  // get(index) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__fetch_function__MoveHand_Event__response,  // fetch(index, &value) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__assign_function__MoveHand_Event__response,  // assign(index, value) function pointer
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__resize_function__MoveHand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_members = {
  "ainex_interfaces__srv",  // message namespace
  "MoveHand_Event",  // message name
  3,  // number of fields
  sizeof(ainex_interfaces__srv__MoveHand_Event),
  false,  // has_any_key_member_
  ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_member_array,  // message members
  ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_type_support_handle = {
  0,
  &ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_members,
  get_message_typesupport_handle_function,
  &ainex_interfaces__srv__MoveHand_Event__get_type_hash,
  &ainex_interfaces__srv__MoveHand_Event__get_type_description,
  &ainex_interfaces__srv__MoveHand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ainex_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Event)() {
  ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Request)();
  ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Response)();
  if (!ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_type_support_handle.typesupport_identifier) {
    ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ainex_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ainex_interfaces/srv/detail/move_hand__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_service_members = {
  "ainex_interfaces__srv",  // service namespace
  "MoveHand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_Request_message_type_support_handle,
  NULL,  // response message
  // ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_Response_message_type_support_handle
  NULL  // event_message
  // ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_Response_message_type_support_handle
};


static rosidl_service_type_support_t ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_service_type_support_handle = {
  0,
  &ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_service_members,
  get_service_typesupport_handle_function,
  &ainex_interfaces__srv__MoveHand_Request__rosidl_typesupport_introspection_c__MoveHand_Request_message_type_support_handle,
  &ainex_interfaces__srv__MoveHand_Response__rosidl_typesupport_introspection_c__MoveHand_Response_message_type_support_handle,
  &ainex_interfaces__srv__MoveHand_Event__rosidl_typesupport_introspection_c__MoveHand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ainex_interfaces,
    srv,
    MoveHand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ainex_interfaces,
    srv,
    MoveHand
  ),
  &ainex_interfaces__srv__MoveHand__get_type_hash,
  &ainex_interfaces__srv__MoveHand__get_type_description,
  &ainex_interfaces__srv__MoveHand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ainex_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand)(void) {
  if (!ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_service_type_support_handle.typesupport_identifier) {
    ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ainex_interfaces, srv, MoveHand_Event)()->data;
  }

  return &ainex_interfaces__srv__detail__move_hand__rosidl_typesupport_introspection_c__MoveHand_service_type_support_handle;
}
