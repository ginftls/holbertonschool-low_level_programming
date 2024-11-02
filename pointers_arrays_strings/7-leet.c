#include "main.h"

/**
* leet - encodes a string into 1337
* @s: the string to be encoded
*
* Return: a pointer to the encoded string
*/
char *leet(char *s)
{
	int i;
	char *map[] = {"aeotl", "43017"};

	for (i = 0; s[i]; i++)
	{
		int j;

		for (j = 0; map[0][j] && s[i] != map[0][j]; j++)
		{
		}
		if (s[i] == map[0][j])
			s[i] = map[1][j];
	}
	return (s);
}
