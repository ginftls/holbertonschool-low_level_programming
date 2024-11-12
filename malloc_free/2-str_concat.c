#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[len1])
		len1++;

	/* Calculate the length of s2 */
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy s2 to concat */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat[i + j] = '\0';

	return (concat);
}
