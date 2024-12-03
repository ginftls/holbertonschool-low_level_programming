#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* Traverse the list and print each element */
	while (h != NULL)
	{
		/* Print the current node's value */
		printf("%d\n", h->n);

		/* Move to the next node */
		h = h->next;

		/* Increment the node count */
		count++;
	}

	return (count);
}
