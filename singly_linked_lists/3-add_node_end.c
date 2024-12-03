#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: Input string
 *
 * Return: Length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - Duplicates a string
 * @str: Input string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if failed
 */
char *_strdup(const char *str)
{
	unsigned int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (head == NULL || str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->str = _strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate string length */
	new_node->len = _strlen(str);
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the last node */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* Attach the new node at the end */
	current->next = new_node;

	return (new_node);
}
