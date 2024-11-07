#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Cast argv to void since we don't use it */
	printf("%d\n", argc - 1);
	return (0);
}
