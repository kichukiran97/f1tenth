// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from internal_interface:msg/EncodedImage.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__FUNCTIONS_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "internal_interface/msg/rosidl_generator_c__visibility_control.h"

#include "internal_interface/msg/detail/encoded_image__struct.h"

/// Initialize msg/EncodedImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * internal_interface__msg__EncodedImage
 * )) before or use
 * internal_interface__msg__EncodedImage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__EncodedImage__init(internal_interface__msg__EncodedImage * msg);

/// Finalize msg/EncodedImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__EncodedImage__fini(internal_interface__msg__EncodedImage * msg);

/// Create msg/EncodedImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * internal_interface__msg__EncodedImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
internal_interface__msg__EncodedImage *
internal_interface__msg__EncodedImage__create();

/// Destroy msg/EncodedImage message.
/**
 * It calls
 * internal_interface__msg__EncodedImage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__EncodedImage__destroy(internal_interface__msg__EncodedImage * msg);

/// Check for msg/EncodedImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__EncodedImage__are_equal(const internal_interface__msg__EncodedImage * lhs, const internal_interface__msg__EncodedImage * rhs);

/// Copy a msg/EncodedImage message.
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
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__EncodedImage__copy(
  const internal_interface__msg__EncodedImage * input,
  internal_interface__msg__EncodedImage * output);

/// Initialize array of msg/EncodedImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * internal_interface__msg__EncodedImage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__EncodedImage__Sequence__init(internal_interface__msg__EncodedImage__Sequence * array, size_t size);

/// Finalize array of msg/EncodedImage messages.
/**
 * It calls
 * internal_interface__msg__EncodedImage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__EncodedImage__Sequence__fini(internal_interface__msg__EncodedImage__Sequence * array);

/// Create array of msg/EncodedImage messages.
/**
 * It allocates the memory for the array and calls
 * internal_interface__msg__EncodedImage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
internal_interface__msg__EncodedImage__Sequence *
internal_interface__msg__EncodedImage__Sequence__create(size_t size);

/// Destroy array of msg/EncodedImage messages.
/**
 * It calls
 * internal_interface__msg__EncodedImage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__EncodedImage__Sequence__destroy(internal_interface__msg__EncodedImage__Sequence * array);

/// Check for msg/EncodedImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__EncodedImage__Sequence__are_equal(const internal_interface__msg__EncodedImage__Sequence * lhs, const internal_interface__msg__EncodedImage__Sequence * rhs);

/// Copy an array of msg/EncodedImage messages.
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
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__EncodedImage__Sequence__copy(
  const internal_interface__msg__EncodedImage__Sequence * input,
  internal_interface__msg__EncodedImage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__FUNCTIONS_H_
