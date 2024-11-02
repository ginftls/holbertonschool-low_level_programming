#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: the string to be modified
*
* Return: a pointer to the modified string
*/
char *cap_string(char *s)
{
	int i, cap_next = 1;

	for (i = 0; s[i]; i++)
	{
		if (cap_next && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			cap_next = 0;
		}
		else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
			cap_next = 0;
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
				s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
			cap_next = 1;
	}

	return (s);
}
