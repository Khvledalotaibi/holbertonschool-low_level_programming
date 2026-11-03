#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using backslashes
 * @n: Number of times the backslash is printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
