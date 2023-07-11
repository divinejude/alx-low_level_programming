#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2-dimensional grid.
 * @grid: The grid to free.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory allocated for a 2-dimensional
 *              grid previously created by alloc_grid function. It frees each
 *              row individually and then frees the grid itself.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

