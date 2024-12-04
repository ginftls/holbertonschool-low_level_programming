#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: sum of all data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/* Traverse the list and add up all the values */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
