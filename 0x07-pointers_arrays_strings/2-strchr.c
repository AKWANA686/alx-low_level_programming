#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: char type pointer
 * @c: char type character
 * Return: the character and NULL if not found
 */

char *_strchr(char *s, char c)
{
	int z;

	while (1)
	{
		z = *s++;
		if (z == c)
		{
			return (s - 1);
		}
		if (z == 0)
		{
			return (NULL);
		}
	}

}
