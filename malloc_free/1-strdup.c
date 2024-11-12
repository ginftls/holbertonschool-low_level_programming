#include <stdlib.h>  /* For malloc and free */

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int len = 0;
    unsigned int i;

    if (str == NULL)
    {
        return (NULL);
    }

    /* Calculate the length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* Allocate memory for the new string (including the null terminator) */
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
    {
        return (NULL);
    }

    /* Copy the string */
    for (i = 0; i <= len; i++)
    {
        dup[i] = str[i];
    }

    return (dup);
}
