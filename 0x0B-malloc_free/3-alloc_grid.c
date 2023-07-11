#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2d array
 * @height: height of array (rows)
 * @width: width of array (columns)
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		/* checks allocations */
		/*
		 *	if (grid[i] == NULL)
		 *	{
		 *		for (j = 0; j < i; j++)
		 *			free(grid[j]);
		 *		free(grid);
		 *		return (NULL);
		 *	}
		 */

		/* initalizes elements in grid */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
