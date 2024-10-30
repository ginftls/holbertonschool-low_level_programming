#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print in reverse
 */
void print_rev(char *s)
{
	int length = 0;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
