#include "main.h"

/**
 * print_triangle - prints a triangle using # characters
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		/* Print spaces */
		for (space = size - row - 1; space > 0; space--)
		{
			_putchar(' ');
		}

		/* Print hashes */
		for (hash = 0; hash <= row; hash++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

