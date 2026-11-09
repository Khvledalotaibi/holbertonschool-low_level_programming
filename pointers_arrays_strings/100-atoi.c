#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i, sign, number, found;

	i = 0;
	sign = 1;
	number = 0;
	found = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			number = number * 10 + (s[i] - '0');
		}
		else if (found)
		{
			break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	return (number * sign);
}
