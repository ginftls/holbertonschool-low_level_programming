#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Number of bytes in initial segment of s consisting of accept bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i, j;

	/* Scan each character in s until a mismatch is found */
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		/* Check if current char in s matches any char in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		/* If no match found, end the count */
		if (!found)
		{
			break;
		}
		count++;
	}

	return (count);
}
