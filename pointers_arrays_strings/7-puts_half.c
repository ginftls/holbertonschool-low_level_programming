#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be processed
 *
 * Description: If length is even, prints second half.
 * If length is odd, prints last n chars where n=(length-1)/2
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculate string length */
	while (str[length] != '\0')
		length++;

	/* Calculate starting position based on length */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2 + 1;

	/* Print characters from start to end */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
