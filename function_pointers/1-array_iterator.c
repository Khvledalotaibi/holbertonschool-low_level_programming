
#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element of an array
 * @array: the array to iterate over
 * @size: number of elements in the array
 * @action: function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
