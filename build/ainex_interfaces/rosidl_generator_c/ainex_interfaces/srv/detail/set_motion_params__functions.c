// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice
#include "ainex_interfaces/srv/detail/set_motion_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ainex_interfaces__srv__SetMotionParams_Request__init(ainex_interfaces__srv__SetMotionParams_Request * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  // acceleration
  // step_degree
  return true;
}

void
ainex_interfaces__srv__SetMotionParams_Request__fini(ainex_interfaces__srv__SetMotionParams_Request * msg)
{
  if (!msg) {
    return;
  }
  // speed
  // acceleration
  // step_degree
}

bool
ainex_interfaces__srv__SetMotionParams_Request__are_equal(const ainex_interfaces__srv__SetMotionParams_Request * lhs, const ainex_interfaces__srv__SetMotionParams_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // step_degree
  if (lhs->step_degree != rhs->step_degree) {
    return false;
  }
  return true;
}

bool
ainex_interfaces__srv__SetMotionParams_Request__copy(
  const ainex_interfaces__srv__SetMotionParams_Request * input,
  ainex_interfaces__srv__SetMotionParams_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  output->speed = input->speed;
  // acceleration
  output->acceleration = input->acceleration;
  // step_degree
  output->step_degree = input->step_degree;
  return true;
}

ainex_interfaces__srv__SetMotionParams_Request *
ainex_interfaces__srv__SetMotionParams_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Request * msg = (ainex_interfaces__srv__SetMotionParams_Request *)allocator.allocate(sizeof(ainex_interfaces__srv__SetMotionParams_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ainex_interfaces__srv__SetMotionParams_Request));
  bool success = ainex_interfaces__srv__SetMotionParams_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ainex_interfaces__srv__SetMotionParams_Request__destroy(ainex_interfaces__srv__SetMotionParams_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ainex_interfaces__srv__SetMotionParams_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ainex_interfaces__srv__SetMotionParams_Request__Sequence__init(ainex_interfaces__srv__SetMotionParams_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Request * data = NULL;

  if (size) {
    data = (ainex_interfaces__srv__SetMotionParams_Request *)allocator.zero_allocate(size, sizeof(ainex_interfaces__srv__SetMotionParams_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ainex_interfaces__srv__SetMotionParams_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ainex_interfaces__srv__SetMotionParams_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ainex_interfaces__srv__SetMotionParams_Request__Sequence__fini(ainex_interfaces__srv__SetMotionParams_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ainex_interfaces__srv__SetMotionParams_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ainex_interfaces__srv__SetMotionParams_Request__Sequence *
ainex_interfaces__srv__SetMotionParams_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Request__Sequence * array = (ainex_interfaces__srv__SetMotionParams_Request__Sequence *)allocator.allocate(sizeof(ainex_interfaces__srv__SetMotionParams_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ainex_interfaces__srv__SetMotionParams_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ainex_interfaces__srv__SetMotionParams_Request__Sequence__destroy(ainex_interfaces__srv__SetMotionParams_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ainex_interfaces__srv__SetMotionParams_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ainex_interfaces__srv__SetMotionParams_Request__Sequence__are_equal(const ainex_interfaces__srv__SetMotionParams_Request__Sequence * lhs, const ainex_interfaces__srv__SetMotionParams_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ainex_interfaces__srv__SetMotionParams_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ainex_interfaces__srv__SetMotionParams_Request__Sequence__copy(
  const ainex_interfaces__srv__SetMotionParams_Request__Sequence * input,
  ainex_interfaces__srv__SetMotionParams_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ainex_interfaces__srv__SetMotionParams_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ainex_interfaces__srv__SetMotionParams_Request * data =
      (ainex_interfaces__srv__SetMotionParams_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ainex_interfaces__srv__SetMotionParams_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ainex_interfaces__srv__SetMotionParams_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ainex_interfaces__srv__SetMotionParams_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
ainex_interfaces__srv__SetMotionParams_Response__init(ainex_interfaces__srv__SetMotionParams_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ainex_interfaces__srv__SetMotionParams_Response__fini(msg);
    return false;
  }
  return true;
}

void
ainex_interfaces__srv__SetMotionParams_Response__fini(ainex_interfaces__srv__SetMotionParams_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ainex_interfaces__srv__SetMotionParams_Response__are_equal(const ainex_interfaces__srv__SetMotionParams_Response * lhs, const ainex_interfaces__srv__SetMotionParams_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ainex_interfaces__srv__SetMotionParams_Response__copy(
  const ainex_interfaces__srv__SetMotionParams_Response * input,
  ainex_interfaces__srv__SetMotionParams_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ainex_interfaces__srv__SetMotionParams_Response *
ainex_interfaces__srv__SetMotionParams_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Response * msg = (ainex_interfaces__srv__SetMotionParams_Response *)allocator.allocate(sizeof(ainex_interfaces__srv__SetMotionParams_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ainex_interfaces__srv__SetMotionParams_Response));
  bool success = ainex_interfaces__srv__SetMotionParams_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ainex_interfaces__srv__SetMotionParams_Response__destroy(ainex_interfaces__srv__SetMotionParams_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ainex_interfaces__srv__SetMotionParams_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ainex_interfaces__srv__SetMotionParams_Response__Sequence__init(ainex_interfaces__srv__SetMotionParams_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Response * data = NULL;

  if (size) {
    data = (ainex_interfaces__srv__SetMotionParams_Response *)allocator.zero_allocate(size, sizeof(ainex_interfaces__srv__SetMotionParams_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ainex_interfaces__srv__SetMotionParams_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ainex_interfaces__srv__SetMotionParams_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ainex_interfaces__srv__SetMotionParams_Response__Sequence__fini(ainex_interfaces__srv__SetMotionParams_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ainex_interfaces__srv__SetMotionParams_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ainex_interfaces__srv__SetMotionParams_Response__Sequence *
ainex_interfaces__srv__SetMotionParams_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Response__Sequence * array = (ainex_interfaces__srv__SetMotionParams_Response__Sequence *)allocator.allocate(sizeof(ainex_interfaces__srv__SetMotionParams_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ainex_interfaces__srv__SetMotionParams_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ainex_interfaces__srv__SetMotionParams_Response__Sequence__destroy(ainex_interfaces__srv__SetMotionParams_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ainex_interfaces__srv__SetMotionParams_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ainex_interfaces__srv__SetMotionParams_Response__Sequence__are_equal(const ainex_interfaces__srv__SetMotionParams_Response__Sequence * lhs, const ainex_interfaces__srv__SetMotionParams_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ainex_interfaces__srv__SetMotionParams_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ainex_interfaces__srv__SetMotionParams_Response__Sequence__copy(
  const ainex_interfaces__srv__SetMotionParams_Response__Sequence * input,
  ainex_interfaces__srv__SetMotionParams_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ainex_interfaces__srv__SetMotionParams_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ainex_interfaces__srv__SetMotionParams_Response * data =
      (ainex_interfaces__srv__SetMotionParams_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ainex_interfaces__srv__SetMotionParams_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ainex_interfaces__srv__SetMotionParams_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ainex_interfaces__srv__SetMotionParams_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ainex_interfaces/srv/detail/set_motion_params__functions.h"

bool
ainex_interfaces__srv__SetMotionParams_Event__init(ainex_interfaces__srv__SetMotionParams_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ainex_interfaces__srv__SetMotionParams_Event__fini(msg);
    return false;
  }
  // request
  if (!ainex_interfaces__srv__SetMotionParams_Request__Sequence__init(&msg->request, 0)) {
    ainex_interfaces__srv__SetMotionParams_Event__fini(msg);
    return false;
  }
  // response
  if (!ainex_interfaces__srv__SetMotionParams_Response__Sequence__init(&msg->response, 0)) {
    ainex_interfaces__srv__SetMotionParams_Event__fini(msg);
    return false;
  }
  return true;
}

void
ainex_interfaces__srv__SetMotionParams_Event__fini(ainex_interfaces__srv__SetMotionParams_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ainex_interfaces__srv__SetMotionParams_Request__Sequence__fini(&msg->request);
  // response
  ainex_interfaces__srv__SetMotionParams_Response__Sequence__fini(&msg->response);
}

bool
ainex_interfaces__srv__SetMotionParams_Event__are_equal(const ainex_interfaces__srv__SetMotionParams_Event * lhs, const ainex_interfaces__srv__SetMotionParams_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ainex_interfaces__srv__SetMotionParams_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ainex_interfaces__srv__SetMotionParams_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ainex_interfaces__srv__SetMotionParams_Event__copy(
  const ainex_interfaces__srv__SetMotionParams_Event * input,
  ainex_interfaces__srv__SetMotionParams_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ainex_interfaces__srv__SetMotionParams_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ainex_interfaces__srv__SetMotionParams_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ainex_interfaces__srv__SetMotionParams_Event *
ainex_interfaces__srv__SetMotionParams_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Event * msg = (ainex_interfaces__srv__SetMotionParams_Event *)allocator.allocate(sizeof(ainex_interfaces__srv__SetMotionParams_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ainex_interfaces__srv__SetMotionParams_Event));
  bool success = ainex_interfaces__srv__SetMotionParams_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ainex_interfaces__srv__SetMotionParams_Event__destroy(ainex_interfaces__srv__SetMotionParams_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ainex_interfaces__srv__SetMotionParams_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ainex_interfaces__srv__SetMotionParams_Event__Sequence__init(ainex_interfaces__srv__SetMotionParams_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Event * data = NULL;

  if (size) {
    data = (ainex_interfaces__srv__SetMotionParams_Event *)allocator.zero_allocate(size, sizeof(ainex_interfaces__srv__SetMotionParams_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ainex_interfaces__srv__SetMotionParams_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ainex_interfaces__srv__SetMotionParams_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ainex_interfaces__srv__SetMotionParams_Event__Sequence__fini(ainex_interfaces__srv__SetMotionParams_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ainex_interfaces__srv__SetMotionParams_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ainex_interfaces__srv__SetMotionParams_Event__Sequence *
ainex_interfaces__srv__SetMotionParams_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ainex_interfaces__srv__SetMotionParams_Event__Sequence * array = (ainex_interfaces__srv__SetMotionParams_Event__Sequence *)allocator.allocate(sizeof(ainex_interfaces__srv__SetMotionParams_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ainex_interfaces__srv__SetMotionParams_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ainex_interfaces__srv__SetMotionParams_Event__Sequence__destroy(ainex_interfaces__srv__SetMotionParams_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ainex_interfaces__srv__SetMotionParams_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ainex_interfaces__srv__SetMotionParams_Event__Sequence__are_equal(const ainex_interfaces__srv__SetMotionParams_Event__Sequence * lhs, const ainex_interfaces__srv__SetMotionParams_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ainex_interfaces__srv__SetMotionParams_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ainex_interfaces__srv__SetMotionParams_Event__Sequence__copy(
  const ainex_interfaces__srv__SetMotionParams_Event__Sequence * input,
  ainex_interfaces__srv__SetMotionParams_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ainex_interfaces__srv__SetMotionParams_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ainex_interfaces__srv__SetMotionParams_Event * data =
      (ainex_interfaces__srv__SetMotionParams_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ainex_interfaces__srv__SetMotionParams_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ainex_interfaces__srv__SetMotionParams_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ainex_interfaces__srv__SetMotionParams_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
