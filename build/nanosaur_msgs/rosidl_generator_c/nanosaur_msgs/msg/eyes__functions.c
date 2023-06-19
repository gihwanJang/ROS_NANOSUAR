// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nanosaur_msgs:msg/Eyes.idl
// generated code does not contain a copyright notice
#include "nanosaur_msgs/msg/eyes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `position`
#include "geometry_msgs/msg/point__functions.h"

bool
nanosaur_msgs__msg__Eyes__init(nanosaur_msgs__msg__Eyes * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nanosaur_msgs__msg__Eyes__fini(msg);
    return false;
  }
  // type
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    nanosaur_msgs__msg__Eyes__fini(msg);
    return false;
  }
  return true;
}

void
nanosaur_msgs__msg__Eyes__fini(nanosaur_msgs__msg__Eyes * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

nanosaur_msgs__msg__Eyes *
nanosaur_msgs__msg__Eyes__create()
{
  nanosaur_msgs__msg__Eyes * msg = (nanosaur_msgs__msg__Eyes *)malloc(sizeof(nanosaur_msgs__msg__Eyes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nanosaur_msgs__msg__Eyes));
  bool success = nanosaur_msgs__msg__Eyes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nanosaur_msgs__msg__Eyes__destroy(nanosaur_msgs__msg__Eyes * msg)
{
  if (msg) {
    nanosaur_msgs__msg__Eyes__fini(msg);
  }
  free(msg);
}


bool
nanosaur_msgs__msg__Eyes__Sequence__init(nanosaur_msgs__msg__Eyes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nanosaur_msgs__msg__Eyes * data = NULL;
  if (size) {
    data = (nanosaur_msgs__msg__Eyes *)calloc(size, sizeof(nanosaur_msgs__msg__Eyes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nanosaur_msgs__msg__Eyes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nanosaur_msgs__msg__Eyes__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nanosaur_msgs__msg__Eyes__Sequence__fini(nanosaur_msgs__msg__Eyes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nanosaur_msgs__msg__Eyes__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nanosaur_msgs__msg__Eyes__Sequence *
nanosaur_msgs__msg__Eyes__Sequence__create(size_t size)
{
  nanosaur_msgs__msg__Eyes__Sequence * array = (nanosaur_msgs__msg__Eyes__Sequence *)malloc(sizeof(nanosaur_msgs__msg__Eyes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nanosaur_msgs__msg__Eyes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nanosaur_msgs__msg__Eyes__Sequence__destroy(nanosaur_msgs__msg__Eyes__Sequence * array)
{
  if (array) {
    nanosaur_msgs__msg__Eyes__Sequence__fini(array);
  }
  free(array);
}
