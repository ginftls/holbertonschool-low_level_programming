#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i == n)
		{
			_putchar('0' + i);
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
