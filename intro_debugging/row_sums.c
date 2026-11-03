#include <stdio.h>

/**
 * row_sum - Calculates the sum of products in a row
 * @row: Current row number
 * @cols: Number of columns
 *
 * Return: Sum of the products
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c < cols; c++)
	{
		sum += row * c;
	}

	return (sum);
}

/**
 * total_sum - Calculates the total sum
 * @rows: Number of rows
 * @cols: Number of columns
 *
 * Return: Total sum
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current;

	for (r = 1; r < rows; r++)
	{
		current = row_sum(r, cols);
		total += current;
	}

	return (total);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", total_sum(4, 4));
	return (0);
}
