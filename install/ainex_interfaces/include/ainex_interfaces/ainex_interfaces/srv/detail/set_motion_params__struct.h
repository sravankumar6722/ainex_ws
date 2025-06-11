// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/set_motion_params.h"


#ifndef AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__STRUCT_H_
#define AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetMotionParams in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__SetMotionParams_Request
{
  int32_t speed;
  int32_t acceleration;
  float step_degree;
  bool torque;
} ainex_interfaces__srv__SetMotionParams_Request;

// Struct for a sequence of ainex_interfaces__srv__SetMotionParams_Request.
typedef struct ainex_interfaces__srv__SetMotionParams_Request__Sequence
{
  ainex_interfaces__srv__SetMotionParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__SetMotionParams_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMotionParams in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__SetMotionParams_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ainex_interfaces__srv__SetMotionParams_Response;

// Struct for a sequence of ainex_interfaces__srv__SetMotionParams_Response.
typedef struct ainex_interfaces__srv__SetMotionParams_Response__Sequence
{
  ainex_interfaces__srv__SetMotionParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__SetMotionParams_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ainex_interfaces__srv__SetMotionParams_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ainex_interfaces__srv__SetMotionParams_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMotionParams in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__SetMotionParams_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ainex_interfaces__srv__SetMotionParams_Request__Sequence request;
  ainex_interfaces__srv__SetMotionParams_Response__Sequence response;
} ainex_interfaces__srv__SetMotionParams_Event;

// Struct for a sequence of ainex_interfaces__srv__SetMotionParams_Event.
typedef struct ainex_interfaces__srv__SetMotionParams_Event__Sequence
{
  ainex_interfaces__srv__SetMotionParams_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__SetMotionParams_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__STRUCT_H_
