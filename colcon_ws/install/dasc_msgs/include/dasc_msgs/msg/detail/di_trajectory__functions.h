// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dasc_msgs:msg/DITrajectory.idl
// generated code does not contain a copyright notice

#ifndef DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__FUNCTIONS_H_
#define DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dasc_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dasc_msgs/msg/detail/di_trajectory__struct.h"

/// Initialize msg/DITrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dasc_msgs__msg__DITrajectory
 * )) before or use
 * dasc_msgs__msg__DITrajectory__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
bool
dasc_msgs__msg__DITrajectory__init(dasc_msgs__msg__DITrajectory * msg);

/// Finalize msg/DITrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
void
dasc_msgs__msg__DITrajectory__fini(dasc_msgs__msg__DITrajectory * msg);

/// Create msg/DITrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dasc_msgs__msg__DITrajectory__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
dasc_msgs__msg__DITrajectory *
dasc_msgs__msg__DITrajectory__create();

/// Destroy msg/DITrajectory message.
/**
 * It calls
 * dasc_msgs__msg__DITrajectory__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
void
dasc_msgs__msg__DITrajectory__destroy(dasc_msgs__msg__DITrajectory * msg);

/// Check for msg/DITrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
bool
dasc_msgs__msg__DITrajectory__are_equal(const dasc_msgs__msg__DITrajectory * lhs, const dasc_msgs__msg__DITrajectory * rhs);

/// Copy a msg/DITrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
bool
dasc_msgs__msg__DITrajectory__copy(
  const dasc_msgs__msg__DITrajectory * input,
  dasc_msgs__msg__DITrajectory * output);

/// Initialize array of msg/DITrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * dasc_msgs__msg__DITrajectory__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
bool
dasc_msgs__msg__DITrajectory__Sequence__init(dasc_msgs__msg__DITrajectory__Sequence * array, size_t size);

/// Finalize array of msg/DITrajectory messages.
/**
 * It calls
 * dasc_msgs__msg__DITrajectory__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
void
dasc_msgs__msg__DITrajectory__Sequence__fini(dasc_msgs__msg__DITrajectory__Sequence * array);

/// Create array of msg/DITrajectory messages.
/**
 * It allocates the memory for the array and calls
 * dasc_msgs__msg__DITrajectory__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
dasc_msgs__msg__DITrajectory__Sequence *
dasc_msgs__msg__DITrajectory__Sequence__create(size_t size);

/// Destroy array of msg/DITrajectory messages.
/**
 * It calls
 * dasc_msgs__msg__DITrajectory__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
void
dasc_msgs__msg__DITrajectory__Sequence__destroy(dasc_msgs__msg__DITrajectory__Sequence * array);

/// Check for msg/DITrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
bool
dasc_msgs__msg__DITrajectory__Sequence__are_equal(const dasc_msgs__msg__DITrajectory__Sequence * lhs, const dasc_msgs__msg__DITrajectory__Sequence * rhs);

/// Copy an array of msg/DITrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_dasc_msgs
bool
dasc_msgs__msg__DITrajectory__Sequence__copy(
  const dasc_msgs__msg__DITrajectory__Sequence * input,
  dasc_msgs__msg__DITrajectory__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__FUNCTIONS_H_
