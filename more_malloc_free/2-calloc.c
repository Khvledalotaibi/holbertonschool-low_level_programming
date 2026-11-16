#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of array elements
 * @size: size of each element
 *
 * Return: pointer to zeroed memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total;
	size_t i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = (size_t)nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}
