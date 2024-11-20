#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *current_str;

	/* Initialize the argument list */
	va_start(args, n);

	/* Loop through all strings */
	for (i = 0; i < n; i++)
	{
		/* Get current string */
		current_str = va_arg(args, char *);

		/* Print current string, or (nil) if NULL */
		if (current_str == NULL)
			printf("(nil)");
		else
			printf("%s", current_str);

		/* Print separator if it's not NULL and not the last string */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	/* Print new line at the end */
	printf("\n");

	/* Clean up */
	va_end(args);
}
