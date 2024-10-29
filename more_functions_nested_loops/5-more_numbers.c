#include "main.h"
#include <unistd.h> /* for write */

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,followed a new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			write(STDOUT_FILENO, &"0123456789"[j], 1);
		}
		write(STDOUT_FILENO, "\n", 1);
	}
}
