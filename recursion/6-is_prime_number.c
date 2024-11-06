#include "main.h"

/**
 * check_prime - helper function to check if n is prime recursively
 * @n: number to check
 * @divisor: current divisor to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int check_prime(int n, int divisor)
{
	/* Base cases */
	if (n < 2)                      /* Numbers less than 2 are not prime */
		return (0);
	if (divisor * divisor > n)      /* We've checked all possible divisors */
		return (1);
	if (n % divisor == 0)           /* Found a divisor, not prime */
		return (0);

	/* Check next divisor */
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)         /* Handle numbers <= 1 */
		return (0);

	return (check_prime(n, 2));  /* Start checking from smallest prime number */
}
