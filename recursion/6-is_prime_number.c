
/**
 * check_divisor - checks recursively whether n has a divisor
 * @n: the number to check
 * @divisor: the current divisor candidate
 *
 * Return: 1 if n is prime, otherwise 0
 */
int check_divisor(int n, int divisor)
{
	if (divisor > n / divisor)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (check_divisor(n, divisor + 1));
}

/**
 * is_prime_number - checks whether an integer is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_divisor(n, 2));
}
