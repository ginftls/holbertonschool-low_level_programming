#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototype de la fonction print_list */
size_t print_list(const list_t *h);

/* Prototype de la fonction _putchar */
int _putchar(char c);

#endif /* LISTS_H */
