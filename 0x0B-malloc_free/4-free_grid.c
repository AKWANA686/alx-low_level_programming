#include "main.h"
#include <stdio>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created
 * @grid: pointer to a 2 dimensional grid
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(x[a]);
	free(x);
}
