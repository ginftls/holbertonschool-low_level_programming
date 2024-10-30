#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be processed
 *
 * Description: Prints every other char of string, starting with first char
 * followed by a new line
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through string until null terminator */
	while (str[i] != '\0')
	{
		/* Print only characters at even indices */
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
