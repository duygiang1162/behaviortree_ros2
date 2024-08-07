// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from behaviortree_ros2:action/Sleep.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIORTREE_ROS2__ACTION__DETAIL__SLEEP__FUNCTIONS_H_
#define BEHAVIORTREE_ROS2__ACTION__DETAIL__SLEEP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "behaviortree_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "behaviortree_ros2/action/detail/sleep__struct.h"

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_Goal
 * )) before or use
 * behaviortree_ros2__action__Sleep_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Goal__init(behaviortree_ros2__action__Sleep_Goal * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Goal__fini(behaviortree_ros2__action__Sleep_Goal * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_Goal *
behaviortree_ros2__action__Sleep_Goal__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Goal__destroy(behaviortree_ros2__action__Sleep_Goal * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Goal__are_equal(const behaviortree_ros2__action__Sleep_Goal * lhs, const behaviortree_ros2__action__Sleep_Goal * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Goal__copy(
  const behaviortree_ros2__action__Sleep_Goal * input,
  behaviortree_ros2__action__Sleep_Goal * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Goal__Sequence__init(behaviortree_ros2__action__Sleep_Goal__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Goal__Sequence__fini(behaviortree_ros2__action__Sleep_Goal__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_Goal__Sequence *
behaviortree_ros2__action__Sleep_Goal__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Goal__Sequence__destroy(behaviortree_ros2__action__Sleep_Goal__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Goal__Sequence__are_equal(const behaviortree_ros2__action__Sleep_Goal__Sequence * lhs, const behaviortree_ros2__action__Sleep_Goal__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Goal__Sequence__copy(
  const behaviortree_ros2__action__Sleep_Goal__Sequence * input,
  behaviortree_ros2__action__Sleep_Goal__Sequence * output);

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_Result
 * )) before or use
 * behaviortree_ros2__action__Sleep_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Result__init(behaviortree_ros2__action__Sleep_Result * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Result__fini(behaviortree_ros2__action__Sleep_Result * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_Result *
behaviortree_ros2__action__Sleep_Result__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Result__destroy(behaviortree_ros2__action__Sleep_Result * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Result__are_equal(const behaviortree_ros2__action__Sleep_Result * lhs, const behaviortree_ros2__action__Sleep_Result * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Result__copy(
  const behaviortree_ros2__action__Sleep_Result * input,
  behaviortree_ros2__action__Sleep_Result * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Result__Sequence__init(behaviortree_ros2__action__Sleep_Result__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Result__Sequence__fini(behaviortree_ros2__action__Sleep_Result__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_Result__Sequence *
behaviortree_ros2__action__Sleep_Result__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Result__Sequence__destroy(behaviortree_ros2__action__Sleep_Result__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Result__Sequence__are_equal(const behaviortree_ros2__action__Sleep_Result__Sequence * lhs, const behaviortree_ros2__action__Sleep_Result__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Result__Sequence__copy(
  const behaviortree_ros2__action__Sleep_Result__Sequence * input,
  behaviortree_ros2__action__Sleep_Result__Sequence * output);

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_Feedback
 * )) before or use
 * behaviortree_ros2__action__Sleep_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Feedback__init(behaviortree_ros2__action__Sleep_Feedback * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Feedback__fini(behaviortree_ros2__action__Sleep_Feedback * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_Feedback *
behaviortree_ros2__action__Sleep_Feedback__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Feedback__destroy(behaviortree_ros2__action__Sleep_Feedback * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Feedback__are_equal(const behaviortree_ros2__action__Sleep_Feedback * lhs, const behaviortree_ros2__action__Sleep_Feedback * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Feedback__copy(
  const behaviortree_ros2__action__Sleep_Feedback * input,
  behaviortree_ros2__action__Sleep_Feedback * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Feedback__Sequence__init(behaviortree_ros2__action__Sleep_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Feedback__Sequence__fini(behaviortree_ros2__action__Sleep_Feedback__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_Feedback__Sequence *
behaviortree_ros2__action__Sleep_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_Feedback__Sequence__destroy(behaviortree_ros2__action__Sleep_Feedback__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Feedback__Sequence__are_equal(const behaviortree_ros2__action__Sleep_Feedback__Sequence * lhs, const behaviortree_ros2__action__Sleep_Feedback__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_Feedback__Sequence__copy(
  const behaviortree_ros2__action__Sleep_Feedback__Sequence * input,
  behaviortree_ros2__action__Sleep_Feedback__Sequence * output);

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_SendGoal_Request
 * )) before or use
 * behaviortree_ros2__action__Sleep_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Request__init(behaviortree_ros2__action__Sleep_SendGoal_Request * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Request__fini(behaviortree_ros2__action__Sleep_SendGoal_Request * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_SendGoal_Request *
behaviortree_ros2__action__Sleep_SendGoal_Request__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Request__destroy(behaviortree_ros2__action__Sleep_SendGoal_Request * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Request__are_equal(const behaviortree_ros2__action__Sleep_SendGoal_Request * lhs, const behaviortree_ros2__action__Sleep_SendGoal_Request * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Request__copy(
  const behaviortree_ros2__action__Sleep_SendGoal_Request * input,
  behaviortree_ros2__action__Sleep_SendGoal_Request * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__init(behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__fini(behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence *
behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__destroy(behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__are_equal(const behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence * lhs, const behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence__copy(
  const behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence * input,
  behaviortree_ros2__action__Sleep_SendGoal_Request__Sequence * output);

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_SendGoal_Response
 * )) before or use
 * behaviortree_ros2__action__Sleep_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Response__init(behaviortree_ros2__action__Sleep_SendGoal_Response * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Response__fini(behaviortree_ros2__action__Sleep_SendGoal_Response * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_SendGoal_Response *
behaviortree_ros2__action__Sleep_SendGoal_Response__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Response__destroy(behaviortree_ros2__action__Sleep_SendGoal_Response * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Response__are_equal(const behaviortree_ros2__action__Sleep_SendGoal_Response * lhs, const behaviortree_ros2__action__Sleep_SendGoal_Response * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Response__copy(
  const behaviortree_ros2__action__Sleep_SendGoal_Response * input,
  behaviortree_ros2__action__Sleep_SendGoal_Response * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__init(behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__fini(behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence *
behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__destroy(behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__are_equal(const behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence * lhs, const behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence__copy(
  const behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence * input,
  behaviortree_ros2__action__Sleep_SendGoal_Response__Sequence * output);

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_GetResult_Request
 * )) before or use
 * behaviortree_ros2__action__Sleep_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Request__init(behaviortree_ros2__action__Sleep_GetResult_Request * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Request__fini(behaviortree_ros2__action__Sleep_GetResult_Request * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_GetResult_Request *
behaviortree_ros2__action__Sleep_GetResult_Request__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Request__destroy(behaviortree_ros2__action__Sleep_GetResult_Request * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Request__are_equal(const behaviortree_ros2__action__Sleep_GetResult_Request * lhs, const behaviortree_ros2__action__Sleep_GetResult_Request * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Request__copy(
  const behaviortree_ros2__action__Sleep_GetResult_Request * input,
  behaviortree_ros2__action__Sleep_GetResult_Request * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__init(behaviortree_ros2__action__Sleep_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__fini(behaviortree_ros2__action__Sleep_GetResult_Request__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_GetResult_Request__Sequence *
behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__destroy(behaviortree_ros2__action__Sleep_GetResult_Request__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__are_equal(const behaviortree_ros2__action__Sleep_GetResult_Request__Sequence * lhs, const behaviortree_ros2__action__Sleep_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Request__Sequence__copy(
  const behaviortree_ros2__action__Sleep_GetResult_Request__Sequence * input,
  behaviortree_ros2__action__Sleep_GetResult_Request__Sequence * output);

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_GetResult_Response
 * )) before or use
 * behaviortree_ros2__action__Sleep_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Response__init(behaviortree_ros2__action__Sleep_GetResult_Response * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Response__fini(behaviortree_ros2__action__Sleep_GetResult_Response * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_GetResult_Response *
behaviortree_ros2__action__Sleep_GetResult_Response__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Response__destroy(behaviortree_ros2__action__Sleep_GetResult_Response * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Response__are_equal(const behaviortree_ros2__action__Sleep_GetResult_Response * lhs, const behaviortree_ros2__action__Sleep_GetResult_Response * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Response__copy(
  const behaviortree_ros2__action__Sleep_GetResult_Response * input,
  behaviortree_ros2__action__Sleep_GetResult_Response * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__init(behaviortree_ros2__action__Sleep_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__fini(behaviortree_ros2__action__Sleep_GetResult_Response__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_GetResult_Response__Sequence *
behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__destroy(behaviortree_ros2__action__Sleep_GetResult_Response__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__are_equal(const behaviortree_ros2__action__Sleep_GetResult_Response__Sequence * lhs, const behaviortree_ros2__action__Sleep_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_GetResult_Response__Sequence__copy(
  const behaviortree_ros2__action__Sleep_GetResult_Response__Sequence * input,
  behaviortree_ros2__action__Sleep_GetResult_Response__Sequence * output);

/// Initialize action/Sleep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * behaviortree_ros2__action__Sleep_FeedbackMessage
 * )) before or use
 * behaviortree_ros2__action__Sleep_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_FeedbackMessage__init(behaviortree_ros2__action__Sleep_FeedbackMessage * msg);

/// Finalize action/Sleep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_FeedbackMessage__fini(behaviortree_ros2__action__Sleep_FeedbackMessage * msg);

/// Create action/Sleep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * behaviortree_ros2__action__Sleep_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_FeedbackMessage *
behaviortree_ros2__action__Sleep_FeedbackMessage__create();

/// Destroy action/Sleep message.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_FeedbackMessage__destroy(behaviortree_ros2__action__Sleep_FeedbackMessage * msg);

/// Check for action/Sleep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_FeedbackMessage__are_equal(const behaviortree_ros2__action__Sleep_FeedbackMessage * lhs, const behaviortree_ros2__action__Sleep_FeedbackMessage * rhs);

/// Copy a action/Sleep message.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_FeedbackMessage__copy(
  const behaviortree_ros2__action__Sleep_FeedbackMessage * input,
  behaviortree_ros2__action__Sleep_FeedbackMessage * output);

/// Initialize array of action/Sleep messages.
/**
 * It allocates the memory for the number of elements and calls
 * behaviortree_ros2__action__Sleep_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__init(behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__fini(behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence * array);

/// Create array of action/Sleep messages.
/**
 * It allocates the memory for the array and calls
 * behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence *
behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Sleep messages.
/**
 * It calls
 * behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
void
behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__destroy(behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence * array);

/// Check for action/Sleep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__are_equal(const behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence * lhs, const behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Sleep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_behaviortree_ros2
bool
behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence__copy(
  const behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence * input,
  behaviortree_ros2__action__Sleep_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIORTREE_ROS2__ACTION__DETAIL__SLEEP__FUNCTIONS_H_
