#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with up to n bytes of s2
 * @s1: first string, or NULL
 * @s2: second string, or NULL
 * @n: maximum number of bytes to copy from s2
 *
 * Return: pointer to the new string, or NULL on allocation failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0' && len2 < n)
		len2++;

	result = malloc((size_t)len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = '\0';

	return (result);
}
