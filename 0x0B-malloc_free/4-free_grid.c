#include "holberton.h"
#include <stdlib.h>

/**
 * free grid - free allocated memeory to grid
 * @grid: function created
 * @height: height of grid
 *
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
