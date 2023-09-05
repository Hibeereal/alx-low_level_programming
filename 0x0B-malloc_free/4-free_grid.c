#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * created by your alloc_grid function.
 * @grid: function grid
 * @height: funtion height
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
