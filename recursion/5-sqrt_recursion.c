
/**
 * find_root - searches for the natural square root
 * @n: the number to check
 * @guess: the current candidate
 *
 * Return: the square root, or -1 if none exists
 */
int find_root(int n, int guess)
{
	if (guess > n / guess)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (find_root(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);
	return (find_root(n, 1));
}
