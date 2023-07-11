#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *  previously created by your alloc_grid function
 *  @grid: address of two dimentional grid.
 *  @height: height of the grid.
 *  Return: 0
 */

void free_grid(int **grid, int height)
{
	int q;

	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}

	free(grid);
}
