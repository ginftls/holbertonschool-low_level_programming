#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Set the prev pointer of the new node to NULL */
	new_node->prev = NULL;

	/* If the list is not empty */
	if (*head != NULL)
	{
		/* Set the next pointer of the new node to the current head */
		new_node->next = *head;

		/* Set the prev pointer of the current head to the new node */
		(*head)->prev = new_node;
	}
	else
	{
		/* If the list is empty, set next pointer to NULL */
		new_node->next = NULL;
	}

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}
