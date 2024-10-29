#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar(' ');
	}
	_putchar('\n');
}
