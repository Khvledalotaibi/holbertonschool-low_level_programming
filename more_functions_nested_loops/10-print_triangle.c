#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int row, col, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (spaces = 0; spaces < size - row - 1; spaces++)
			_putchar(' ');

		for (col = 0; col <= row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
