
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: numerator
 * @b: denominator
 * Return: the quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the remainder of two integers
 * @a: dividend
 * @b: divisor
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
