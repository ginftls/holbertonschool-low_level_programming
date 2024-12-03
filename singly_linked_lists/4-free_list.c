#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Description: Frees each node and its string in the linked list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		/* Store the next node before freeing current */
		current = head;
		head = head->next;

		/* Free the string first */
		free(current->str);

		/* Then free the node itself */
		free(current);
	}
}
