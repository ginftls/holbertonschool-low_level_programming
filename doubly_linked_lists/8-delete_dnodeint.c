#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	/* Check if head is NULL or list is empty */
	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* Handle deletion at the beginning of the list */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node to be deleted */
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	/* Check if index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Update previous node's next pointer */
	if (current->prev != NULL)
		current->prev->next = current->next;

	/* Update next node's previous pointer */
	if (current->next != NULL)
		current->next->prev = current->prev;

	/* Free the node */
	free(current);
	return (1);
}
