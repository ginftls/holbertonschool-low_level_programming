#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* Base cases */
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	/* Recursive case */
	return (n * factorial(n - 1));
}
