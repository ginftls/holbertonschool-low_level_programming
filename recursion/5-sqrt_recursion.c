#include "main.h"

/**
 * find_sqrt - helper function to find square root recursively
 * @n: number to find square root of
 * @guess: current guess for square root
 *
 * Return: natural square root, or -1 if not found
 */
int find_sqrt(int n, int guess)
{
	/* If guess * guess is n, we found the square root */
	if (guess * guess == n)
		return (guess);

	/* If guess * guess exceeds n, no natural square root exists */
	if (guess * guess > n)
		return (-1);

	/* Try next number */
	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	/* Handle negative numbers */
	if (n < 0)
		return (-1);

	/* Start searching from 1 */
	return (find_sqrt(n, 1));
}
