#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				_putchar('0');
			else
				_putchar('0' + i * j);
			if (j < 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
