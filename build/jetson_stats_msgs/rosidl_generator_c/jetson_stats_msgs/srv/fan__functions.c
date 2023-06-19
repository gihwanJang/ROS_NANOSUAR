// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jetson_stats_msgs:srv/Fan.idl
// generated code does not contain a copyright notice
#include "jetson_stats_msgs/srv/fan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `mode`
#include "rosidl_generator_c/string_functions.h"

bool
jetson_stats_msgs__srv__Fan_Request__init(jetson_stats_msgs__srv__Fan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!rosidl_generator_c__String__init(&msg->mode)) {
    jetson_stats_msgs__srv__Fan_Request__fini(msg);
    return false;
  }
  // speed
  return true;
}

void
jetson_stats_msgs__srv__Fan_Request__fini(jetson_stats_msgs__srv__Fan_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
  rosidl_generator_c__String__fini(&msg->mode);
  // speed
}

jetson_stats_msgs__srv__Fan_Request *
jetson_stats_msgs__srv__Fan_Request__create()
{
  jetson_stats_msgs__srv__Fan_Request * msg = (jetson_stats_msgs__srv__Fan_Request *)malloc(sizeof(jetson_stats_msgs__srv__Fan_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetson_stats_msgs__srv__Fan_Request));
  bool success = jetson_stats_msgs__srv__Fan_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
jetson_stats_msgs__srv__Fan_Request__destroy(jetson_stats_msgs__srv__Fan_Request * msg)
{
  if (msg) {
    jetson_stats_msgs__srv__Fan_Request__fini(msg);
  }
  free(msg);
}


bool
jetson_stats_msgs__srv__Fan_Request__Sequence__init(jetson_stats_msgs__srv__Fan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  jetson_stats_msgs__srv__Fan_Request * data = NULL;
  if (size) {
    data = (jetson_stats_msgs__srv__Fan_Request *)calloc(size, sizeof(jetson_stats_msgs__srv__Fan_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetson_stats_msgs__srv__Fan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetson_stats_msgs__srv__Fan_Request__fini(&data[i - 1]);
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
jetson_stats_msgs__srv__Fan_Request__Sequence__fini(jetson_stats_msgs__srv__Fan_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jetson_stats_msgs__srv__Fan_Request__fini(&array->data[i]);
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

jetson_stats_msgs__srv__Fan_Request__Sequence *
jetson_stats_msgs__srv__Fan_Request__Sequence__create(size_t size)
{
  jetson_stats_msgs__srv__Fan_Request__Sequence * array = (jetson_stats_msgs__srv__Fan_Request__Sequence *)malloc(sizeof(jetson_stats_msgs__srv__Fan_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = jetson_stats_msgs__srv__Fan_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
jetson_stats_msgs__srv__Fan_Request__Sequence__destroy(jetson_stats_msgs__srv__Fan_Request__Sequence * array)
{
  if (array) {
    jetson_stats_msgs__srv__Fan_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `set_fan_mode`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
jetson_stats_msgs__srv__Fan_Response__init(jetson_stats_msgs__srv__Fan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // set_fan_mode
  if (!rosidl_generator_c__String__init(&msg->set_fan_mode)) {
    jetson_stats_msgs__srv__Fan_Response__fini(msg);
    return false;
  }
  // set_fan_speed
  return true;
}

void
jetson_stats_msgs__srv__Fan_Response__fini(jetson_stats_msgs__srv__Fan_Response * msg)
{
  if (!msg) {
    return;
  }
  // set_fan_mode
  rosidl_generator_c__String__fini(&msg->set_fan_mode);
  // set_fan_speed
}

jetson_stats_msgs__srv__Fan_Response *
jetson_stats_msgs__srv__Fan_Response__create()
{
  jetson_stats_msgs__srv__Fan_Response * msg = (jetson_stats_msgs__srv__Fan_Response *)malloc(sizeof(jetson_stats_msgs__srv__Fan_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetson_stats_msgs__srv__Fan_Response));
  bool success = jetson_stats_msgs__srv__Fan_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
jetson_stats_msgs__srv__Fan_Response__destroy(jetson_stats_msgs__srv__Fan_Response * msg)
{
  if (msg) {
    jetson_stats_msgs__srv__Fan_Response__fini(msg);
  }
  free(msg);
}


bool
jetson_stats_msgs__srv__Fan_Response__Sequence__init(jetson_stats_msgs__srv__Fan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  jetson_stats_msgs__srv__Fan_Response * data = NULL;
  if (size) {
    data = (jetson_stats_msgs__srv__Fan_Response *)calloc(size, sizeof(jetson_stats_msgs__srv__Fan_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetson_stats_msgs__srv__Fan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetson_stats_msgs__srv__Fan_Response__fini(&data[i - 1]);
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
jetson_stats_msgs__srv__Fan_Response__Sequence__fini(jetson_stats_msgs__srv__Fan_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jetson_stats_msgs__srv__Fan_Response__fini(&array->data[i]);
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

jetson_stats_msgs__srv__Fan_Response__Sequence *
jetson_stats_msgs__srv__Fan_Response__Sequence__create(size_t size)
{
  jetson_stats_msgs__srv__Fan_Response__Sequence * array = (jetson_stats_msgs__srv__Fan_Response__Sequence *)malloc(sizeof(jetson_stats_msgs__srv__Fan_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = jetson_stats_msgs__srv__Fan_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
jetson_stats_msgs__srv__Fan_Response__Sequence__destroy(jetson_stats_msgs__srv__Fan_Response__Sequence * array)
{
  if (array) {
    jetson_stats_msgs__srv__Fan_Response__Sequence__fini(array);
  }
  free(array);
}
