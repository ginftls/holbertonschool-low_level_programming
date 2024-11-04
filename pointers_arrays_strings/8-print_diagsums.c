#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: Pointer to the square matrix
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;
	long int sum2 = 0;

	/* Calculate sum of main diagonal (top-left to bottom-right) */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	/* Calculate sum of secondary diagonal (top-right to bottom-left) */
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}
