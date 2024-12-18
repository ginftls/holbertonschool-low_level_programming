#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @s: the string to be modified
*
* Return: a pointer to the modified string
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
