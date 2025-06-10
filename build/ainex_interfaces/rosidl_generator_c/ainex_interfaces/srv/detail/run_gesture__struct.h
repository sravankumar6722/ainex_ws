// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ainex_interfaces:srv/RunGesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/run_gesture.h"


#ifndef AINEX_INTERFACES__SRV__DETAIL__RUN_GESTURE__STRUCT_H_
#define AINEX_INTERFACES__SRV__DETAIL__RUN_GESTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gesture_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RunGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__RunGesture_Request
{
  rosidl_runtime_c__String gesture_name;
} ainex_interfaces__srv__RunGesture_Request;

// Struct for a sequence of ainex_interfaces__srv__RunGesture_Request.
typedef struct ainex_interfaces__srv__RunGesture_Request__Sequence
{
  ainex_interfaces__srv__RunGesture_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__RunGesture_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RunGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__RunGesture_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ainex_interfaces__srv__RunGesture_Response;

// Struct for a sequence of ainex_interfaces__srv__RunGesture_Response.
typedef struct ainex_interfaces__srv__RunGesture_Response__Sequence
{
  ainex_interfaces__srv__RunGesture_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__RunGesture_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ainex_interfaces__srv__RunGesture_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ainex_interfaces__srv__RunGesture_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RunGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__RunGesture_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ainex_interfaces__srv__RunGesture_Request__Sequence request;
  ainex_interfaces__srv__RunGesture_Response__Sequence response;
} ainex_interfaces__srv__RunGesture_Event;

// Struct for a sequence of ainex_interfaces__srv__RunGesture_Event.
typedef struct ainex_interfaces__srv__RunGesture_Event__Sequence
{
  ainex_interfaces__srv__RunGesture_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__RunGesture_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AINEX_INTERFACES__SRV__DETAIL__RUN_GESTURE__STRUCT_H_
