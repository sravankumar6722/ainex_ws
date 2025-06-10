// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ainex_interfaces:action/ExecuteGesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/action/execute_gesture.h"


#ifndef AINEX_INTERFACES__ACTION__DETAIL__EXECUTE_GESTURE__STRUCT_H_
#define AINEX_INTERFACES__ACTION__DETAIL__EXECUTE_GESTURE__STRUCT_H_

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

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_Goal
{
  rosidl_runtime_c__String gesture_name;
} ainex_interfaces__action__ExecuteGesture_Goal;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_Goal.
typedef struct ainex_interfaces__action__ExecuteGesture_Goal__Sequence
{
  ainex_interfaces__action__ExecuteGesture_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_Result
{
  bool success;
  rosidl_runtime_c__String message;
} ainex_interfaces__action__ExecuteGesture_Result;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_Result.
typedef struct ainex_interfaces__action__ExecuteGesture_Result__Sequence
{
  ainex_interfaces__action__ExecuteGesture_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_Feedback
{
  rosidl_runtime_c__String status;
} ainex_interfaces__action__ExecuteGesture_Feedback;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_Feedback.
typedef struct ainex_interfaces__action__ExecuteGesture_Feedback__Sequence
{
  ainex_interfaces__action__ExecuteGesture_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ainex_interfaces/action/detail/execute_gesture__struct.h"

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ainex_interfaces__action__ExecuteGesture_Goal goal;
} ainex_interfaces__action__ExecuteGesture_SendGoal_Request;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_SendGoal_Request.
typedef struct ainex_interfaces__action__ExecuteGesture_SendGoal_Request__Sequence
{
  ainex_interfaces__action__ExecuteGesture_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ainex_interfaces__action__ExecuteGesture_SendGoal_Response;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_SendGoal_Response.
typedef struct ainex_interfaces__action__ExecuteGesture_SendGoal_Response__Sequence
{
  ainex_interfaces__action__ExecuteGesture_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ainex_interfaces__action__ExecuteGesture_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ainex_interfaces__action__ExecuteGesture_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ainex_interfaces__action__ExecuteGesture_SendGoal_Request__Sequence request;
  ainex_interfaces__action__ExecuteGesture_SendGoal_Response__Sequence response;
} ainex_interfaces__action__ExecuteGesture_SendGoal_Event;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_SendGoal_Event.
typedef struct ainex_interfaces__action__ExecuteGesture_SendGoal_Event__Sequence
{
  ainex_interfaces__action__ExecuteGesture_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ainex_interfaces__action__ExecuteGesture_GetResult_Request;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_GetResult_Request.
typedef struct ainex_interfaces__action__ExecuteGesture_GetResult_Request__Sequence
{
  ainex_interfaces__action__ExecuteGesture_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ainex_interfaces/action/detail/execute_gesture__struct.h"

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_GetResult_Response
{
  int8_t status;
  ainex_interfaces__action__ExecuteGesture_Result result;
} ainex_interfaces__action__ExecuteGesture_GetResult_Response;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_GetResult_Response.
typedef struct ainex_interfaces__action__ExecuteGesture_GetResult_Response__Sequence
{
  ainex_interfaces__action__ExecuteGesture_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ainex_interfaces__action__ExecuteGesture_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ainex_interfaces__action__ExecuteGesture_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ainex_interfaces__action__ExecuteGesture_GetResult_Request__Sequence request;
  ainex_interfaces__action__ExecuteGesture_GetResult_Response__Sequence response;
} ainex_interfaces__action__ExecuteGesture_GetResult_Event;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_GetResult_Event.
typedef struct ainex_interfaces__action__ExecuteGesture_GetResult_Event__Sequence
{
  ainex_interfaces__action__ExecuteGesture_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ainex_interfaces/action/detail/execute_gesture__struct.h"

/// Struct defined in action/ExecuteGesture in the package ainex_interfaces.
typedef struct ainex_interfaces__action__ExecuteGesture_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ainex_interfaces__action__ExecuteGesture_Feedback feedback;
} ainex_interfaces__action__ExecuteGesture_FeedbackMessage;

// Struct for a sequence of ainex_interfaces__action__ExecuteGesture_FeedbackMessage.
typedef struct ainex_interfaces__action__ExecuteGesture_FeedbackMessage__Sequence
{
  ainex_interfaces__action__ExecuteGesture_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ainex_interfaces__action__ExecuteGesture_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AINEX_INTERFACES__ACTION__DETAIL__EXECUTE_GESTURE__STRUCT_H_
