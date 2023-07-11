#include <stdlib.h>

/**
 * free_grid - deallocates a 2D array
 * @grid: a 2D aray pointer
 * @height: height or number of subarrays
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	/*j = ((int)sizeof(grid[0]) / (int)sizeof(grid[0][0]));*/

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
