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
	int **x;
	int a, b;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}
	x = malloc(height * sizeof(*x));
	if (x == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		x[a] = malloc(width * sizeof(**x));
		if (x[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(x[a]);
			free(a);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			x[a][b] = 0;
	}
	return (x);
}
