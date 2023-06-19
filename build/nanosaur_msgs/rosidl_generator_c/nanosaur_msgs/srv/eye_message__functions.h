// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nanosaur_msgs:srv/EyeMessage.idl
// generated code does not contain a copyright notice

#ifndef NANOSAUR_MSGS__SRV__EYE_MESSAGE__FUNCTIONS_H_
#define NANOSAUR_MSGS__SRV__EYE_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nanosaur_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nanosaur_msgs/srv/eye_message__struct.h"

/// Initialize srv/EyeMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nanosaur_msgs__srv__EyeMessage_Request
 * )) before or use
 * nanosaur_msgs__srv__EyeMessage_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
bool
nanosaur_msgs__srv__EyeMessage_Request__init(nanosaur_msgs__srv__EyeMessage_Request * msg);

/// Finalize srv/EyeMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Request__fini(nanosaur_msgs__srv__EyeMessage_Request * msg);

/// Create srv/EyeMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nanosaur_msgs__srv__EyeMessage_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
nanosaur_msgs__srv__EyeMessage_Request *
nanosaur_msgs__srv__EyeMessage_Request__create();

/// Destroy srv/EyeMessage message.
/**
 * It calls
 * nanosaur_msgs__srv__EyeMessage_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Request__destroy(nanosaur_msgs__srv__EyeMessage_Request * msg);


/// Initialize array of srv/EyeMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * nanosaur_msgs__srv__EyeMessage_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
bool
nanosaur_msgs__srv__EyeMessage_Request__Sequence__init(nanosaur_msgs__srv__EyeMessage_Request__Sequence * array, size_t size);

/// Finalize array of srv/EyeMessage messages.
/**
 * It calls
 * nanosaur_msgs__srv__EyeMessage_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Request__Sequence__fini(nanosaur_msgs__srv__EyeMessage_Request__Sequence * array);

/// Create array of srv/EyeMessage messages.
/**
 * It allocates the memory for the array and calls
 * nanosaur_msgs__srv__EyeMessage_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
nanosaur_msgs__srv__EyeMessage_Request__Sequence *
nanosaur_msgs__srv__EyeMessage_Request__Sequence__create(size_t size);

/// Destroy array of srv/EyeMessage messages.
/**
 * It calls
 * nanosaur_msgs__srv__EyeMessage_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Request__Sequence__destroy(nanosaur_msgs__srv__EyeMessage_Request__Sequence * array);

/// Initialize srv/EyeMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nanosaur_msgs__srv__EyeMessage_Response
 * )) before or use
 * nanosaur_msgs__srv__EyeMessage_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
bool
nanosaur_msgs__srv__EyeMessage_Response__init(nanosaur_msgs__srv__EyeMessage_Response * msg);

/// Finalize srv/EyeMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Response__fini(nanosaur_msgs__srv__EyeMessage_Response * msg);

/// Create srv/EyeMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nanosaur_msgs__srv__EyeMessage_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
nanosaur_msgs__srv__EyeMessage_Response *
nanosaur_msgs__srv__EyeMessage_Response__create();

/// Destroy srv/EyeMessage message.
/**
 * It calls
 * nanosaur_msgs__srv__EyeMessage_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Response__destroy(nanosaur_msgs__srv__EyeMessage_Response * msg);


/// Initialize array of srv/EyeMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * nanosaur_msgs__srv__EyeMessage_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
bool
nanosaur_msgs__srv__EyeMessage_Response__Sequence__init(nanosaur_msgs__srv__EyeMessage_Response__Sequence * array, size_t size);

/// Finalize array of srv/EyeMessage messages.
/**
 * It calls
 * nanosaur_msgs__srv__EyeMessage_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Response__Sequence__fini(nanosaur_msgs__srv__EyeMessage_Response__Sequence * array);

/// Create array of srv/EyeMessage messages.
/**
 * It allocates the memory for the array and calls
 * nanosaur_msgs__srv__EyeMessage_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
nanosaur_msgs__srv__EyeMessage_Response__Sequence *
nanosaur_msgs__srv__EyeMessage_Response__Sequence__create(size_t size);

/// Destroy array of srv/EyeMessage messages.
/**
 * It calls
 * nanosaur_msgs__srv__EyeMessage_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nanosaur_msgs
void
nanosaur_msgs__srv__EyeMessage_Response__Sequence__destroy(nanosaur_msgs__srv__EyeMessage_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NANOSAUR_MSGS__SRV__EYE_MESSAGE__FUNCTIONS_H_
