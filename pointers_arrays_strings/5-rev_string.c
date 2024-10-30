#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Find the length of the string */
	}

	i--; /* Index of the last character */

	for (j = 0; j < i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
