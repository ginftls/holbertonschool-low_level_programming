#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize the argument list */
	va_start(args, n);

	/* Loop through all numbers */
	for (i = 0; i < n; i++)
	{
		/* Print current number */
		printf("%d", va_arg(args, int));

		/* Print separator if it's not NULL and not the last number */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	/* Print new line at the end */
	printf("\n");

	/* Clean up */
	va_end(args);
}
