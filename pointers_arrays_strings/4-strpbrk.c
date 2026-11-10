#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String to search
 * @accept: Characters to search for
 *
 * Return: Pointer to the matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
