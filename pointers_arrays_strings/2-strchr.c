#include "main.h"
#include <stddef.h> /* for NULL definition */

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
