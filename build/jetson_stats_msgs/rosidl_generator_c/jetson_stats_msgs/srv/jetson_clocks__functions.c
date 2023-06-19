// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from jetson_stats_msgs:srv/JetsonClocks.idl
// generated code does not contain a copyright notice
#include "jetson_stats_msgs/srv/jetson_clocks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
jetson_stats_msgs__srv__JetsonClocks_Request__init(jetson_stats_msgs__srv__JetsonClocks_Request * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
jetson_stats_msgs__srv__JetsonClocks_Request__fini(jetson_stats_msgs__srv__JetsonClocks_Request * msg)
{
  if (!msg) {
    return;
  }
  // status
}

jetson_stats_msgs__srv__JetsonClocks_Request *
jetson_stats_msgs__srv__JetsonClocks_Request__create()
{
  jetson_stats_msgs__srv__JetsonClocks_Request * msg = (jetson_stats_msgs__srv__JetsonClocks_Request *)malloc(sizeof(jetson_stats_msgs__srv__JetsonClocks_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetson_stats_msgs__srv__JetsonClocks_Request));
  bool success = jetson_stats_msgs__srv__JetsonClocks_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
jetson_stats_msgs__srv__JetsonClocks_Request__destroy(jetson_stats_msgs__srv__JetsonClocks_Request * msg)
{
  if (msg) {
    jetson_stats_msgs__srv__JetsonClocks_Request__fini(msg);
  }
  free(msg);
}


bool
jetson_stats_msgs__srv__JetsonClocks_Request__Sequence__init(jetson_stats_msgs__srv__JetsonClocks_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  jetson_stats_msgs__srv__JetsonClocks_Request * data = NULL;
  if (size) {
    data = (jetson_stats_msgs__srv__JetsonClocks_Request *)calloc(size, sizeof(jetson_stats_msgs__srv__JetsonClocks_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetson_stats_msgs__srv__JetsonClocks_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetson_stats_msgs__srv__JetsonClocks_Request__fini(&data[i - 1]);
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
jetson_stats_msgs__srv__JetsonClocks_Request__Sequence__fini(jetson_stats_msgs__srv__JetsonClocks_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jetson_stats_msgs__srv__JetsonClocks_Request__fini(&array->data[i]);
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

jetson_stats_msgs__srv__JetsonClocks_Request__Sequence *
jetson_stats_msgs__srv__JetsonClocks_Request__Sequence__create(size_t size)
{
  jetson_stats_msgs__srv__JetsonClocks_Request__Sequence * array = (jetson_stats_msgs__srv__JetsonClocks_Request__Sequence *)malloc(sizeof(jetson_stats_msgs__srv__JetsonClocks_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = jetson_stats_msgs__srv__JetsonClocks_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
jetson_stats_msgs__srv__JetsonClocks_Request__Sequence__destroy(jetson_stats_msgs__srv__JetsonClocks_Request__Sequence * array)
{
  if (array) {
    jetson_stats_msgs__srv__JetsonClocks_Request__Sequence__fini(array);
  }
  free(array);
}


bool
jetson_stats_msgs__srv__JetsonClocks_Response__init(jetson_stats_msgs__srv__JetsonClocks_Response * msg)
{
  if (!msg) {
    return false;
  }
  // done
  return true;
}

void
jetson_stats_msgs__srv__JetsonClocks_Response__fini(jetson_stats_msgs__srv__JetsonClocks_Response * msg)
{
  if (!msg) {
    return;
  }
  // done
}

jetson_stats_msgs__srv__JetsonClocks_Response *
jetson_stats_msgs__srv__JetsonClocks_Response__create()
{
  jetson_stats_msgs__srv__JetsonClocks_Response * msg = (jetson_stats_msgs__srv__JetsonClocks_Response *)malloc(sizeof(jetson_stats_msgs__srv__JetsonClocks_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(jetson_stats_msgs__srv__JetsonClocks_Response));
  bool success = jetson_stats_msgs__srv__JetsonClocks_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
jetson_stats_msgs__srv__JetsonClocks_Response__destroy(jetson_stats_msgs__srv__JetsonClocks_Response * msg)
{
  if (msg) {
    jetson_stats_msgs__srv__JetsonClocks_Response__fini(msg);
  }
  free(msg);
}


bool
jetson_stats_msgs__srv__JetsonClocks_Response__Sequence__init(jetson_stats_msgs__srv__JetsonClocks_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  jetson_stats_msgs__srv__JetsonClocks_Response * data = NULL;
  if (size) {
    data = (jetson_stats_msgs__srv__JetsonClocks_Response *)calloc(size, sizeof(jetson_stats_msgs__srv__JetsonClocks_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = jetson_stats_msgs__srv__JetsonClocks_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        jetson_stats_msgs__srv__JetsonClocks_Response__fini(&data[i - 1]);
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
jetson_stats_msgs__srv__JetsonClocks_Response__Sequence__fini(jetson_stats_msgs__srv__JetsonClocks_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      jetson_stats_msgs__srv__JetsonClocks_Response__fini(&array->data[i]);
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

jetson_stats_msgs__srv__JetsonClocks_Response__Sequence *
jetson_stats_msgs__srv__JetsonClocks_Response__Sequence__create(size_t size)
{
  jetson_stats_msgs__srv__JetsonClocks_Response__Sequence * array = (jetson_stats_msgs__srv__JetsonClocks_Response__Sequence *)malloc(sizeof(jetson_stats_msgs__srv__JetsonClocks_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = jetson_stats_msgs__srv__JetsonClocks_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
jetson_stats_msgs__srv__JetsonClocks_Response__Sequence__destroy(jetson_stats_msgs__srv__JetsonClocks_Response__Sequence * array)
{
  if (array) {
    jetson_stats_msgs__srv__JetsonClocks_Response__Sequence__fini(array);
  }
  free(array);
}
