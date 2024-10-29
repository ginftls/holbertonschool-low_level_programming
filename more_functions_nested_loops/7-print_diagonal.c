#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times the character '_' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		/* Do nothing or print an error message if n <= 0 */
	}
}
