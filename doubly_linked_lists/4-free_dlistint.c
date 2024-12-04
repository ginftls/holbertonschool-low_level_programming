#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		/* Store the next node before freeing the current node */
		next = current->next;

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = next;
	}
}
