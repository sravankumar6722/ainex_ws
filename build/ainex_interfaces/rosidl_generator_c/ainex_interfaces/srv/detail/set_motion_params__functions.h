// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/set_motion_params.h"


#ifndef AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__FUNCTIONS_H_
#define AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "ainex_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ainex_interfaces/srv/detail/set_motion_params__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__SetMotionParams__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SetMotionParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ainex_interfaces__srv__SetMotionParams_Request
 * )) before or use
 * ainex_interfaces__srv__SetMotionParams_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Request__init(ainex_interfaces__srv__SetMotionParams_Request * msg);

/// Finalize srv/SetMotionParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Request__fini(ainex_interfaces__srv__SetMotionParams_Request * msg);

/// Create srv/SetMotionParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ainex_interfaces__srv__SetMotionParams_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
ainex_interfaces__srv__SetMotionParams_Request *
ainex_interfaces__srv__SetMotionParams_Request__create(void);

/// Destroy srv/SetMotionParams message.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Request__destroy(ainex_interfaces__srv__SetMotionParams_Request * msg);

/// Check for srv/SetMotionParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Request__are_equal(const ainex_interfaces__srv__SetMotionParams_Request * lhs, const ainex_interfaces__srv__SetMotionParams_Request * rhs);

/// Copy a srv/SetMotionParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Request__copy(
  const ainex_interfaces__srv__SetMotionParams_Request * input,
  ainex_interfaces__srv__SetMotionParams_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__SetMotionParams_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetMotionParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * ainex_interfaces__srv__SetMotionParams_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Request__Sequence__init(ainex_interfaces__srv__SetMotionParams_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetMotionParams messages.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Request__Sequence__fini(ainex_interfaces__srv__SetMotionParams_Request__Sequence * array);

/// Create array of srv/SetMotionParams messages.
/**
 * It allocates the memory for the array and calls
 * ainex_interfaces__srv__SetMotionParams_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
ainex_interfaces__srv__SetMotionParams_Request__Sequence *
ainex_interfaces__srv__SetMotionParams_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetMotionParams messages.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Request__Sequence__destroy(ainex_interfaces__srv__SetMotionParams_Request__Sequence * array);

/// Check for srv/SetMotionParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Request__Sequence__are_equal(const ainex_interfaces__srv__SetMotionParams_Request__Sequence * lhs, const ainex_interfaces__srv__SetMotionParams_Request__Sequence * rhs);

/// Copy an array of srv/SetMotionParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Request__Sequence__copy(
  const ainex_interfaces__srv__SetMotionParams_Request__Sequence * input,
  ainex_interfaces__srv__SetMotionParams_Request__Sequence * output);

/// Initialize srv/SetMotionParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ainex_interfaces__srv__SetMotionParams_Response
 * )) before or use
 * ainex_interfaces__srv__SetMotionParams_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Response__init(ainex_interfaces__srv__SetMotionParams_Response * msg);

/// Finalize srv/SetMotionParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Response__fini(ainex_interfaces__srv__SetMotionParams_Response * msg);

/// Create srv/SetMotionParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ainex_interfaces__srv__SetMotionParams_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
ainex_interfaces__srv__SetMotionParams_Response *
ainex_interfaces__srv__SetMotionParams_Response__create(void);

/// Destroy srv/SetMotionParams message.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Response__destroy(ainex_interfaces__srv__SetMotionParams_Response * msg);

/// Check for srv/SetMotionParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Response__are_equal(const ainex_interfaces__srv__SetMotionParams_Response * lhs, const ainex_interfaces__srv__SetMotionParams_Response * rhs);

/// Copy a srv/SetMotionParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Response__copy(
  const ainex_interfaces__srv__SetMotionParams_Response * input,
  ainex_interfaces__srv__SetMotionParams_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__SetMotionParams_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetMotionParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * ainex_interfaces__srv__SetMotionParams_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Response__Sequence__init(ainex_interfaces__srv__SetMotionParams_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetMotionParams messages.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Response__Sequence__fini(ainex_interfaces__srv__SetMotionParams_Response__Sequence * array);

/// Create array of srv/SetMotionParams messages.
/**
 * It allocates the memory for the array and calls
 * ainex_interfaces__srv__SetMotionParams_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
ainex_interfaces__srv__SetMotionParams_Response__Sequence *
ainex_interfaces__srv__SetMotionParams_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetMotionParams messages.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Response__Sequence__destroy(ainex_interfaces__srv__SetMotionParams_Response__Sequence * array);

/// Check for srv/SetMotionParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Response__Sequence__are_equal(const ainex_interfaces__srv__SetMotionParams_Response__Sequence * lhs, const ainex_interfaces__srv__SetMotionParams_Response__Sequence * rhs);

/// Copy an array of srv/SetMotionParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Response__Sequence__copy(
  const ainex_interfaces__srv__SetMotionParams_Response__Sequence * input,
  ainex_interfaces__srv__SetMotionParams_Response__Sequence * output);

/// Initialize srv/SetMotionParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ainex_interfaces__srv__SetMotionParams_Event
 * )) before or use
 * ainex_interfaces__srv__SetMotionParams_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Event__init(ainex_interfaces__srv__SetMotionParams_Event * msg);

/// Finalize srv/SetMotionParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Event__fini(ainex_interfaces__srv__SetMotionParams_Event * msg);

/// Create srv/SetMotionParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ainex_interfaces__srv__SetMotionParams_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
ainex_interfaces__srv__SetMotionParams_Event *
ainex_interfaces__srv__SetMotionParams_Event__create(void);

/// Destroy srv/SetMotionParams message.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Event__destroy(ainex_interfaces__srv__SetMotionParams_Event * msg);

/// Check for srv/SetMotionParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Event__are_equal(const ainex_interfaces__srv__SetMotionParams_Event * lhs, const ainex_interfaces__srv__SetMotionParams_Event * rhs);

/// Copy a srv/SetMotionParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Event__copy(
  const ainex_interfaces__srv__SetMotionParams_Event * input,
  ainex_interfaces__srv__SetMotionParams_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_type_hash_t *
ainex_interfaces__srv__SetMotionParams_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ainex_interfaces__srv__SetMotionParams_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ainex_interfaces__srv__SetMotionParams_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ainex_interfaces__srv__SetMotionParams_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetMotionParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * ainex_interfaces__srv__SetMotionParams_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Event__Sequence__init(ainex_interfaces__srv__SetMotionParams_Event__Sequence * array, size_t size);

/// Finalize array of srv/SetMotionParams messages.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Event__Sequence__fini(ainex_interfaces__srv__SetMotionParams_Event__Sequence * array);

/// Create array of srv/SetMotionParams messages.
/**
 * It allocates the memory for the array and calls
 * ainex_interfaces__srv__SetMotionParams_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
ainex_interfaces__srv__SetMotionParams_Event__Sequence *
ainex_interfaces__srv__SetMotionParams_Event__Sequence__create(size_t size);

/// Destroy array of srv/SetMotionParams messages.
/**
 * It calls
 * ainex_interfaces__srv__SetMotionParams_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
void
ainex_interfaces__srv__SetMotionParams_Event__Sequence__destroy(ainex_interfaces__srv__SetMotionParams_Event__Sequence * array);

/// Check for srv/SetMotionParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Event__Sequence__are_equal(const ainex_interfaces__srv__SetMotionParams_Event__Sequence * lhs, const ainex_interfaces__srv__SetMotionParams_Event__Sequence * rhs);

/// Copy an array of srv/SetMotionParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ainex_interfaces
bool
ainex_interfaces__srv__SetMotionParams_Event__Sequence__copy(
  const ainex_interfaces__srv__SetMotionParams_Event__Sequence * input,
  ainex_interfaces__srv__SetMotionParams_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__FUNCTIONS_H_
