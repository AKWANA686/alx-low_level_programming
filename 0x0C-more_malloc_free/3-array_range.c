#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @max: max input
 * @min: min input
 * Return: pointer to the newly created array
 * or NULL if its fails
 */

int *array_range(int min, int max)
{
	char *a;
	int b, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
		a[b] = min++;

	return (a);
}
