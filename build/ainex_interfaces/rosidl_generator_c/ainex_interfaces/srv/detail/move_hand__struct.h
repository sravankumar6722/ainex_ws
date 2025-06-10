// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ainex_interfaces:srv/MoveHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/move_hand.h"


#ifndef AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__STRUCT_H_
#define AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MoveHand in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__MoveHand_Request
{
  rosidl_runtime_c__double__Sequence angles;
} ainex_interfaces__srv__MoveHand_Request;

// Struct for a sequence of ainex_interfaces__srv__MoveHand_Request.
typedef struct ainex_interfaces__srv__MoveHand_Request__Sequence
{
  ainex_interfaces__srv__MoveHand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__MoveHand_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveHand in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__MoveHand_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ainex_interfaces__srv__MoveHand_Response;

// Struct for a sequence of ainex_interfaces__srv__MoveHand_Response.
typedef struct ainex_interfaces__srv__MoveHand_Response__Sequence
{
  ainex_interfaces__srv__MoveHand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__MoveHand_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ainex_interfaces__srv__MoveHand_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ainex_interfaces__srv__MoveHand_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MoveHand in the package ainex_interfaces.
typedef struct ainex_interfaces__srv__MoveHand_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ainex_interfaces__srv__MoveHand_Request__Sequence request;
  ainex_interfaces__srv__MoveHand_Response__Sequence response;
} ainex_interfaces__srv__MoveHand_Event;

// Struct for a sequence of ainex_interfaces__srv__MoveHand_Event.
typedef struct ainex_interfaces__srv__MoveHand_Event__Sequence
{
  ainex_interfaces__srv__MoveHand_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__srv__MoveHand_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__STRUCT_H_
