
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a newly allocated copy of a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	unsigned int length;
	unsigned int i;
	char *copy;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	copy = malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		copy[i] = str[i];

	return (copy);
}
