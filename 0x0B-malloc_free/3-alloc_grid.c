#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Write a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, l, k;
	

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid =(int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{

		for (k = 0; k <= 0; k--)
		{
			free (grid[k]);
		}
		free(grid);
		return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (l = 0; l < width; l++)
		{
			grid[j][l] = 0;
		}
		free(grid);
	}
	return (grid);
}
