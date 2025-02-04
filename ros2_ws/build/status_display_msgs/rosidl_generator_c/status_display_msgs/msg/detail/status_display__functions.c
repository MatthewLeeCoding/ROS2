// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from status_display_msgs:msg/StatusDisplay.idl
// generated code does not contain a copyright notice
#include "status_display_msgs/msg/detail/status_display__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
status_display_msgs__msg__StatusDisplay__init(status_display_msgs__msg__StatusDisplay * msg)
{
  if (!msg) {
    return false;
  }
  // left_setpoint
  // left_velocity
  // left_output
  // right_setpoint
  // right_velocity
  // right_output
  return true;
}

void
status_display_msgs__msg__StatusDisplay__fini(status_display_msgs__msg__StatusDisplay * msg)
{
  if (!msg) {
    return;
  }
  // left_setpoint
  // left_velocity
  // left_output
  // right_setpoint
  // right_velocity
  // right_output
}

bool
status_display_msgs__msg__StatusDisplay__are_equal(const status_display_msgs__msg__StatusDisplay * lhs, const status_display_msgs__msg__StatusDisplay * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_setpoint
  if (lhs->left_setpoint != rhs->left_setpoint) {
    return false;
  }
  // left_velocity
  if (lhs->left_velocity != rhs->left_velocity) {
    return false;
  }
  // left_output
  if (lhs->left_output != rhs->left_output) {
    return false;
  }
  // right_setpoint
  if (lhs->right_setpoint != rhs->right_setpoint) {
    return false;
  }
  // right_velocity
  if (lhs->right_velocity != rhs->right_velocity) {
    return false;
  }
  // right_output
  if (lhs->right_output != rhs->right_output) {
    return false;
  }
  return true;
}

bool
status_display_msgs__msg__StatusDisplay__copy(
  const status_display_msgs__msg__StatusDisplay * input,
  status_display_msgs__msg__StatusDisplay * output)
{
  if (!input || !output) {
    return false;
  }
  // left_setpoint
  output->left_setpoint = input->left_setpoint;
  // left_velocity
  output->left_velocity = input->left_velocity;
  // left_output
  output->left_output = input->left_output;
  // right_setpoint
  output->right_setpoint = input->right_setpoint;
  // right_velocity
  output->right_velocity = input->right_velocity;
  // right_output
  output->right_output = input->right_output;
  return true;
}

status_display_msgs__msg__StatusDisplay *
status_display_msgs__msg__StatusDisplay__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  status_display_msgs__msg__StatusDisplay * msg = (status_display_msgs__msg__StatusDisplay *)allocator.allocate(sizeof(status_display_msgs__msg__StatusDisplay), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(status_display_msgs__msg__StatusDisplay));
  bool success = status_display_msgs__msg__StatusDisplay__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
status_display_msgs__msg__StatusDisplay__destroy(status_display_msgs__msg__StatusDisplay * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    status_display_msgs__msg__StatusDisplay__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
status_display_msgs__msg__StatusDisplay__Sequence__init(status_display_msgs__msg__StatusDisplay__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  status_display_msgs__msg__StatusDisplay * data = NULL;

  if (size) {
    data = (status_display_msgs__msg__StatusDisplay *)allocator.zero_allocate(size, sizeof(status_display_msgs__msg__StatusDisplay), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = status_display_msgs__msg__StatusDisplay__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        status_display_msgs__msg__StatusDisplay__fini(&data[i - 1]);
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
status_display_msgs__msg__StatusDisplay__Sequence__fini(status_display_msgs__msg__StatusDisplay__Sequence * array)
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
      status_display_msgs__msg__StatusDisplay__fini(&array->data[i]);
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

status_display_msgs__msg__StatusDisplay__Sequence *
status_display_msgs__msg__StatusDisplay__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  status_display_msgs__msg__StatusDisplay__Sequence * array = (status_display_msgs__msg__StatusDisplay__Sequence *)allocator.allocate(sizeof(status_display_msgs__msg__StatusDisplay__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = status_display_msgs__msg__StatusDisplay__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
status_display_msgs__msg__StatusDisplay__Sequence__destroy(status_display_msgs__msg__StatusDisplay__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    status_display_msgs__msg__StatusDisplay__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
status_display_msgs__msg__StatusDisplay__Sequence__are_equal(const status_display_msgs__msg__StatusDisplay__Sequence * lhs, const status_display_msgs__msg__StatusDisplay__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!status_display_msgs__msg__StatusDisplay__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
status_display_msgs__msg__StatusDisplay__Sequence__copy(
  const status_display_msgs__msg__StatusDisplay__Sequence * input,
  status_display_msgs__msg__StatusDisplay__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(status_display_msgs__msg__StatusDisplay);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    status_display_msgs__msg__StatusDisplay * data =
      (status_display_msgs__msg__StatusDisplay *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!status_display_msgs__msg__StatusDisplay__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          status_display_msgs__msg__StatusDisplay__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!status_display_msgs__msg__StatusDisplay__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
