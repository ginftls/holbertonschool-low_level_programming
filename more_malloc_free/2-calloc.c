#include <stdlib.h>

/**
 *_calloc - Allocates memory for an array of nmemb elements of size bytes each.
 *@nmemb: The number of elements.
 *@size: The size of each element.
 *
 *Return: A pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
