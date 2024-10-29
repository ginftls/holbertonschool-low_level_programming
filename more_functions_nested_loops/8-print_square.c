#include "main.h"

/**
 * print_square - prints a square of a given size using the character '#'
 * @size: The size of the square. If 0 or less, it just prints a new line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
