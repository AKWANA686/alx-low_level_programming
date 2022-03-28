#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: char type pointer
 * @src: char type pointer
 * @n: unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; a++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
