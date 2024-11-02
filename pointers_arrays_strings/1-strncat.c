#include "main.h"

/**
* _strncat - Concatenates n bytes from a string to another
* @dest: Destination string
* @src: Source string
* @n: Number of bytes of src to concatenate
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append at most n bytes from src */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
