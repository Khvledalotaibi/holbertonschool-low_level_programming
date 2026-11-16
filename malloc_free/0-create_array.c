
#include <stdlib.h>

/**
 * create_array - creates and initializes an array of characters
 * @size: the size of the array
 * @c: the character to initialize each element with
 *
 * Return: a pointer to the array, or NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
