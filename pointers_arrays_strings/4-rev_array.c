#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array of integers
* @n: number of elements in the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		/* Swap elements at start and end indices */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move indices towards the center */
		start++;
		end--;
	}
}
