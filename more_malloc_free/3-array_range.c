#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: smallest value in the array
 * @max: largest value in the array
 *
 * Return: pointer to the array, or NULL if min > max or allocation fails
 */
int *array_range(int min, int max)
{
	size_t count;
	size_t i;
	int *array;

	if (min > max)
		return (NULL);
	count = (size_t)((long)max - min + 1);
	array = malloc(sizeof(int) * count);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		array[i] = (int)((long)min + i);

	return (array);
}
