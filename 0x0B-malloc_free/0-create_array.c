#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: unsigned int
 * @c: char
 * Return: pointer to the array
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;
	return (array);
}
