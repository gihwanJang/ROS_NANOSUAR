// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jetson_stats_msgs:srv/Fan.idl
// generated code does not contain a copyright notice
#include "jetson_stats_msgs/srv/fan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jetson_stats_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetson_stats_msgs/srv/fan__struct.h"
#include "jetson_stats_msgs/srv/fan__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // mode
#include "rosidl_generator_c/string_functions.h"  // mode

// forward declare type support functions


using _Fan_Request__ros_msg_type = jetson_stats_msgs__srv__Fan_Request;

static bool _Fan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Fan_Request__ros_msg_type * ros_message = static_cast<const _Fan_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    const rosidl_generator_c__String * str = &ros_message->mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  return true;
}

static bool _Fan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Fan_Request__ros_msg_type * ros_message = static_cast<_Fan_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mode.data) {
      rosidl_generator_c__String__init(&ros_message->mode);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mode'\n");
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t get_serialized_size_jetson_stats_msgs__srv__Fan_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Fan_Request__ros_msg_type * ros_message = static_cast<const _Fan_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode.size + 1);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Fan_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetson_stats_msgs__srv__Fan_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t max_serialized_size_jetson_stats_msgs__srv__Fan_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Fan_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetson_stats_msgs__srv__Fan_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Fan_Request = {
  "jetson_stats_msgs::srv",
  "Fan_Request",
  _Fan_Request__cdr_serialize,
  _Fan_Request__cdr_deserialize,
  _Fan_Request__get_serialized_size,
  _Fan_Request__max_serialized_size
};

static rosidl_message_type_support_t _Fan_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Fan_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, Fan_Request)() {
  return &_Fan_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "jetson_stats_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "jetson_stats_msgs/srv/fan__struct.h"
// already included above
// #include "jetson_stats_msgs/srv/fan__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_generator_c/string.h"  // set_fan_mode
// already included above
// #include "rosidl_generator_c/string_functions.h"  // set_fan_mode

// forward declare type support functions


using _Fan_Response__ros_msg_type = jetson_stats_msgs__srv__Fan_Response;

static bool _Fan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Fan_Response__ros_msg_type * ros_message = static_cast<const _Fan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: set_fan_mode
  {
    const rosidl_generator_c__String * str = &ros_message->set_fan_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: set_fan_speed
  {
    cdr << ros_message->set_fan_speed;
  }

  return true;
}

static bool _Fan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Fan_Response__ros_msg_type * ros_message = static_cast<_Fan_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: set_fan_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->set_fan_mode.data) {
      rosidl_generator_c__String__init(&ros_message->set_fan_mode);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->set_fan_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'set_fan_mode'\n");
      return false;
    }
  }

  // Field name: set_fan_speed
  {
    cdr >> ros_message->set_fan_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t get_serialized_size_jetson_stats_msgs__srv__Fan_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Fan_Response__ros_msg_type * ros_message = static_cast<const _Fan_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name set_fan_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->set_fan_mode.size + 1);
  // field.name set_fan_speed
  {
    size_t item_size = sizeof(ros_message->set_fan_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Fan_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetson_stats_msgs__srv__Fan_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t max_serialized_size_jetson_stats_msgs__srv__Fan_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: set_fan_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: set_fan_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Fan_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetson_stats_msgs__srv__Fan_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Fan_Response = {
  "jetson_stats_msgs::srv",
  "Fan_Response",
  _Fan_Response__cdr_serialize,
  _Fan_Response__cdr_deserialize,
  _Fan_Response__get_serialized_size,
  _Fan_Response__max_serialized_size
};

static rosidl_message_type_support_t _Fan_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Fan_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, Fan_Response)() {
  return &_Fan_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "jetson_stats_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetson_stats_msgs/srv/fan.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Fan__callbacks = {
  "jetson_stats_msgs::srv",
  "Fan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, Fan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, Fan_Response)(),
};

static rosidl_service_type_support_t Fan__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Fan__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, Fan)() {
  return &Fan__handle;
}

#if defined(__cplusplus)
}
#endif
