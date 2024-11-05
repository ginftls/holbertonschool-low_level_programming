#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base case: if we reach end of string, return */
	if (*s == '\0')
		return;

	/* Recursive case: move to next character first, then print */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
