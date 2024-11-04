#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to search in
 * @c: The character to look for
 *
 * Return:A pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* Check for null character if c is '\0' */
	if (c == '\0')
		return (s);

	return (NULL);
}
