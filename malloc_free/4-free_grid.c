#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers.
 * @grid: The 2D array to be freed.
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Free each row */
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	/* Free the array of pointers */
	free(grid);
}
