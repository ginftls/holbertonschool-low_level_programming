#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to dog structure to free
 *
 * Frees the memory allocated for the name and owner strings,
 * as well as the dog structure itself
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);   /* Free the name string */
		free(d->owner);  /* Free the owner string */
		free(d);        /* Free the structure itself */
	}
}
