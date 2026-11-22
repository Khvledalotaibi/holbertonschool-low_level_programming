
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - runs the calculator
 * @argc: number of command-line arguments
 * @argv: command-line argument values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(a, b));
	return (0);
}
