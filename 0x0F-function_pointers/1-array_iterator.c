#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of an array
 * @array: array to be used
 * @size: size of array
 * @action: function to perform at each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
