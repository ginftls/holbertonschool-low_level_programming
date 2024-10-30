#include "main.h"

/**
 * _strcpy - copies string pointed to by src to dest buffer
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character including null terminator */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/* Add null terminator */
	dest[i] = '\0';

	/* Return pointer to destination string */
	return (dest);
}
