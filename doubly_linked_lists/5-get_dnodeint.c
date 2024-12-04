#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve (starting from 0)
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	/* Traverse the list */
	while (head != NULL)
	{
		/* If current index matches the desired index, return the node */
		if (current_index == index)
			return (head);

		/* Move to the next node */
		head = head->next;
		current_index++;
	}

	/* If index is out of range, return NULL */
	return (NULL);
}
