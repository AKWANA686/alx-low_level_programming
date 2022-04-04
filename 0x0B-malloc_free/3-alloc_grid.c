#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer
 * to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: return NULL if width or height
 * is 0 or negative
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(**grid));
		if (grid[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(grid[a]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
