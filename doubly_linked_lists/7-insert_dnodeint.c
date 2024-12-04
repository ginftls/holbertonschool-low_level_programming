#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* If list is NULL and index is not 0, return NULL */
	if (h == NULL || *h == NULL)
		return (NULL);

	current = *h;

	/* Traverse to the node before the insertion point */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	/* Check if index is out of bounds */
	if (current == NULL)
		return (NULL);

	/* Special case: inserting at the end */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* Adjust pointers to insert the new node */
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
