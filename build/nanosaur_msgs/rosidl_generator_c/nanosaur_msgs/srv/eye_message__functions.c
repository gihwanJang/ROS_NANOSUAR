// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nanosaur_msgs:srv/EyeMessage.idl
// generated code does not contain a copyright notice
#include "nanosaur_msgs/srv/eye_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `message`
#include "rosidl_generator_c/string_functions.h"

bool
nanosaur_msgs__srv__EyeMessage_Request__init(nanosaur_msgs__srv__EyeMessage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // display
  // type
  // message
  if (!rosidl_generator_c__String__Sequence__init(&msg->message, 0)) {
    nanosaur_msgs__srv__EyeMessage_Request__fini(msg);
    return false;
  }
  // timeout
  return true;
}

void
nanosaur_msgs__srv__EyeMessage_Request__fini(nanosaur_msgs__srv__EyeMessage_Request * msg)
{
  if (!msg) {
    return;
  }
  // display
  // type
  // message
  rosidl_generator_c__String__Sequence__fini(&msg->message);
  // timeout
}

nanosaur_msgs__srv__EyeMessage_Request *
nanosaur_msgs__srv__EyeMessage_Request__create()
{
  nanosaur_msgs__srv__EyeMessage_Request * msg = (nanosaur_msgs__srv__EyeMessage_Request *)malloc(sizeof(nanosaur_msgs__srv__EyeMessage_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nanosaur_msgs__srv__EyeMessage_Request));
  bool success = nanosaur_msgs__srv__EyeMessage_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nanosaur_msgs__srv__EyeMessage_Request__destroy(nanosaur_msgs__srv__EyeMessage_Request * msg)
{
  if (msg) {
    nanosaur_msgs__srv__EyeMessage_Request__fini(msg);
  }
  free(msg);
}


bool
nanosaur_msgs__srv__EyeMessage_Request__Sequence__init(nanosaur_msgs__srv__EyeMessage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nanosaur_msgs__srv__EyeMessage_Request * data = NULL;
  if (size) {
    data = (nanosaur_msgs__srv__EyeMessage_Request *)calloc(size, sizeof(nanosaur_msgs__srv__EyeMessage_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nanosaur_msgs__srv__EyeMessage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nanosaur_msgs__srv__EyeMessage_Request__fini(&data[i - 1]);
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
nanosaur_msgs__srv__EyeMessage_Request__Sequence__fini(nanosaur_msgs__srv__EyeMessage_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nanosaur_msgs__srv__EyeMessage_Request__fini(&array->data[i]);
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

nanosaur_msgs__srv__EyeMessage_Request__Sequence *
nanosaur_msgs__srv__EyeMessage_Request__Sequence__create(size_t size)
{
  nanosaur_msgs__srv__EyeMessage_Request__Sequence * array = (nanosaur_msgs__srv__EyeMessage_Request__Sequence *)malloc(sizeof(nanosaur_msgs__srv__EyeMessage_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nanosaur_msgs__srv__EyeMessage_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nanosaur_msgs__srv__EyeMessage_Request__Sequence__destroy(nanosaur_msgs__srv__EyeMessage_Request__Sequence * array)
{
  if (array) {
    nanosaur_msgs__srv__EyeMessage_Request__Sequence__fini(array);
  }
  free(array);
}


bool
nanosaur_msgs__srv__EyeMessage_Response__init(nanosaur_msgs__srv__EyeMessage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // done
  return true;
}

void
nanosaur_msgs__srv__EyeMessage_Response__fini(nanosaur_msgs__srv__EyeMessage_Response * msg)
{
  if (!msg) {
    return;
  }
  // done
}

nanosaur_msgs__srv__EyeMessage_Response *
nanosaur_msgs__srv__EyeMessage_Response__create()
{
  nanosaur_msgs__srv__EyeMessage_Response * msg = (nanosaur_msgs__srv__EyeMessage_Response *)malloc(sizeof(nanosaur_msgs__srv__EyeMessage_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nanosaur_msgs__srv__EyeMessage_Response));
  bool success = nanosaur_msgs__srv__EyeMessage_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nanosaur_msgs__srv__EyeMessage_Response__destroy(nanosaur_msgs__srv__EyeMessage_Response * msg)
{
  if (msg) {
    nanosaur_msgs__srv__EyeMessage_Response__fini(msg);
  }
  free(msg);
}


bool
nanosaur_msgs__srv__EyeMessage_Response__Sequence__init(nanosaur_msgs__srv__EyeMessage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nanosaur_msgs__srv__EyeMessage_Response * data = NULL;
  if (size) {
    data = (nanosaur_msgs__srv__EyeMessage_Response *)calloc(size, sizeof(nanosaur_msgs__srv__EyeMessage_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nanosaur_msgs__srv__EyeMessage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nanosaur_msgs__srv__EyeMessage_Response__fini(&data[i - 1]);
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
nanosaur_msgs__srv__EyeMessage_Response__Sequence__fini(nanosaur_msgs__srv__EyeMessage_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nanosaur_msgs__srv__EyeMessage_Response__fini(&array->data[i]);
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

nanosaur_msgs__srv__EyeMessage_Response__Sequence *
nanosaur_msgs__srv__EyeMessage_Response__Sequence__create(size_t size)
{
  nanosaur_msgs__srv__EyeMessage_Response__Sequence * array = (nanosaur_msgs__srv__EyeMessage_Response__Sequence *)malloc(sizeof(nanosaur_msgs__srv__EyeMessage_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nanosaur_msgs__srv__EyeMessage_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nanosaur_msgs__srv__EyeMessage_Response__Sequence__destroy(nanosaur_msgs__srv__EyeMessage_Response__Sequence * array)
{
  if (array) {
    nanosaur_msgs__srv__EyeMessage_Response__Sequence__fini(array);
  }
  free(array);
}
