// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jetson_stats_msgs:srv/Fan.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__FAN__FUNCTIONS_H_
#define JETSON_STATS_MSGS__SRV__FAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "jetson_stats_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "jetson_stats_msgs/srv/fan__struct.h"

/// Initialize srv/Fan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * jetson_stats_msgs__srv__Fan_Request
 * )) before or use
 * jetson_stats_msgs__srv__Fan_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
bool
jetson_stats_msgs__srv__Fan_Request__init(jetson_stats_msgs__srv__Fan_Request * msg);

/// Finalize srv/Fan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Request__fini(jetson_stats_msgs__srv__Fan_Request * msg);

/// Create srv/Fan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * jetson_stats_msgs__srv__Fan_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
jetson_stats_msgs__srv__Fan_Request *
jetson_stats_msgs__srv__Fan_Request__create();

/// Destroy srv/Fan message.
/**
 * It calls
 * jetson_stats_msgs__srv__Fan_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Request__destroy(jetson_stats_msgs__srv__Fan_Request * msg);


/// Initialize array of srv/Fan messages.
/**
 * It allocates the memory for the number of elements and calls
 * jetson_stats_msgs__srv__Fan_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
bool
jetson_stats_msgs__srv__Fan_Request__Sequence__init(jetson_stats_msgs__srv__Fan_Request__Sequence * array, size_t size);

/// Finalize array of srv/Fan messages.
/**
 * It calls
 * jetson_stats_msgs__srv__Fan_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Request__Sequence__fini(jetson_stats_msgs__srv__Fan_Request__Sequence * array);

/// Create array of srv/Fan messages.
/**
 * It allocates the memory for the array and calls
 * jetson_stats_msgs__srv__Fan_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
jetson_stats_msgs__srv__Fan_Request__Sequence *
jetson_stats_msgs__srv__Fan_Request__Sequence__create(size_t size);

/// Destroy array of srv/Fan messages.
/**
 * It calls
 * jetson_stats_msgs__srv__Fan_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Request__Sequence__destroy(jetson_stats_msgs__srv__Fan_Request__Sequence * array);

/// Initialize srv/Fan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * jetson_stats_msgs__srv__Fan_Response
 * )) before or use
 * jetson_stats_msgs__srv__Fan_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
bool
jetson_stats_msgs__srv__Fan_Response__init(jetson_stats_msgs__srv__Fan_Response * msg);

/// Finalize srv/Fan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Response__fini(jetson_stats_msgs__srv__Fan_Response * msg);

/// Create srv/Fan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * jetson_stats_msgs__srv__Fan_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
jetson_stats_msgs__srv__Fan_Response *
jetson_stats_msgs__srv__Fan_Response__create();

/// Destroy srv/Fan message.
/**
 * It calls
 * jetson_stats_msgs__srv__Fan_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Response__destroy(jetson_stats_msgs__srv__Fan_Response * msg);


/// Initialize array of srv/Fan messages.
/**
 * It allocates the memory for the number of elements and calls
 * jetson_stats_msgs__srv__Fan_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
bool
jetson_stats_msgs__srv__Fan_Response__Sequence__init(jetson_stats_msgs__srv__Fan_Response__Sequence * array, size_t size);

/// Finalize array of srv/Fan messages.
/**
 * It calls
 * jetson_stats_msgs__srv__Fan_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Response__Sequence__fini(jetson_stats_msgs__srv__Fan_Response__Sequence * array);

/// Create array of srv/Fan messages.
/**
 * It allocates the memory for the array and calls
 * jetson_stats_msgs__srv__Fan_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
jetson_stats_msgs__srv__Fan_Response__Sequence *
jetson_stats_msgs__srv__Fan_Response__Sequence__create(size_t size);

/// Destroy array of srv/Fan messages.
/**
 * It calls
 * jetson_stats_msgs__srv__Fan_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_jetson_stats_msgs
void
jetson_stats_msgs__srv__Fan_Response__Sequence__destroy(jetson_stats_msgs__srv__Fan_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // JETSON_STATS_MSGS__SRV__FAN__FUNCTIONS_H_
