#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2D grid created by alloc_grid
 * @grid: grid to free
 * @height: number of lines
 *
 * Return: NULL on failure
 */

void free_grid(int **grid, int height)
{
	int ligne = 0;

	for (ligne = 0; ligne < height; ligne++)
	{
		{
		free(grid[ligne]);
		}
	}
	free(grid);
}
