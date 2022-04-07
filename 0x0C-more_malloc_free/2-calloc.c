#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array num
 * @size: size of each array element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	for (b = 0; b < nmemb; b++)
	{
		a[b] = 0;
	}
	return (a);
}
