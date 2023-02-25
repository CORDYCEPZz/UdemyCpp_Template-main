#pragma once

#include "DynArray.h"
/**
 * @brief Returns the sum of a dynamic array object
 *
 * @param dyn_arr The dynamic array object.
 * @return DynamicArray
 */
double sum(const DynamicArray &dyn_arr);

/**
 * @brief Returns the mean of a dynamic array object
 *
 * @param dyn_arr The dynamic array object.
 * @return DynamicArray
 */
double mean(const DynamicArray &dyn_arr);

/**
 * @brief Returns the median of a dynamic array object
 *
 * @param dyn_arr The dynamic array object.
 * @return DynamicArray
 */
double median(const DynamicArray &dyn_arr);
