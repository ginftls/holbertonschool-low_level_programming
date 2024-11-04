#include "main.h"
#include <stddef.h> /* for NULL definition */

/**
 * _strchr Write a function that locates a character in a string.
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Number of bytes in initial segment of s consisting of accept bytes
 */

char *_strchr(char *s, char c) /* _strchr returns a pointer first occurrence */
{
	char *f = NULL;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (f); /* return NULL explicitly declared as a pointer */
}
