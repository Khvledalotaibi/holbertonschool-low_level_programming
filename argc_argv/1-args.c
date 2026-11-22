
#include <stdio.h>

/**
 * main - prints the number of command-line arguments
 * @argc: argument count, including the program name
 * @argv: array of command-line arguments (unused)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
