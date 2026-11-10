#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Accepted characters
 *
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;

		if (accept[j] == '\0')
			break;

		i++;
	}

	return (i);
}
