#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: given grid.
 * @height: given value.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free((int *)grid[i]);

	free(grid);
}
