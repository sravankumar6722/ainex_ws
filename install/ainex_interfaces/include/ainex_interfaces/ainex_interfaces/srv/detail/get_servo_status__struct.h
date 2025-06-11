// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ainex_interfaces:srv/GetServoStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/get_servo_status.h"


#ifndef AINEX_INTERFACES__SRV__DETAIL__GET_SERVO_STATUS__STRUCT_H_
#define AINEX_INTERFACES__SRV__DETAIL__GET_SERVO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetServoStatus in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__GetServoStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} ainex_interfaces__srv__GetServoStatus_Request;

// Struct for a sequence of ainex_interfaces__srv__GetServoStatus_Request.
typedef struct ainex_interfaces__srv__GetServoStatus_Request__Sequence
{
  ainex_interfaces__srv__GetServoStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__GetServoStatus_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'angles'
// Member 'raw_positions'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetServoStatus in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__GetServoStatus_Response
{
  rosidl_runtime_c__float__Sequence angles;
  rosidl_runtime_c__int32__Sequence raw_positions;
  bool success;
  rosidl_runtime_c__String message;
} ainex_interfaces__srv__GetServoStatus_Response;

// Struct for a sequence of ainex_interfaces__srv__GetServoStatus_Response.
typedef struct ainex_interfaces__srv__GetServoStatus_Response__Sequence
{
  ainex_interfaces__srv__GetServoStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__GetServoStatus_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ainex_interfaces__srv__GetServoStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ainex_interfaces__srv__GetServoStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetServoStatus in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__GetServoStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ainex_interfaces__srv__GetServoStatus_Request__Sequence request;
  ainex_interfaces__srv__GetServoStatus_Response__Sequence response;
} ainex_interfaces__srv__GetServoStatus_Event;

// Struct for a sequence of ainex_interfaces__srv__GetServoStatus_Event.
typedef struct ainex_interfaces__srv__GetServoStatus_Event__Sequence
{
  ainex_interfaces__srv__GetServoStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__GetServoStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AINEX_INTERFACES__SRV__DETAIL__GET_SERVO_STATUS__STRUCT_H_
