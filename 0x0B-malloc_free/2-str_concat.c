#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: char one to concatenate
 * @s2: char two to concatenate
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int b, c, d, e;
	char *x;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	for (b = 0; s1[b] != '\0'; b++)
		;
	for (c = 0; s2[c] != '\0'; c++)
		;
	x = malloc((b * sizeof(s1)) + (c * sizeof(*s2)) + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	for (d = 0, e = 0; d < (b + c + 1); d++)
	{
		if (d < b)
			x[d] = s1[d];
		else
			x[d] = s2[e++];
	}
	return (x);
}
