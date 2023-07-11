#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: On success, returns a pointer to the newly created 2-dimensional
 *         array of integers. Each element is initialized to 0.
 *         Returns NULL if width or height is less than or equal to 0,
 *         or if memory allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;
	int size = width * height;

	if (size <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}

