#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char type pointer
 * @accept: char type pointer
 * Return: number of bytes in initial segment of s
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept);
{
	int j, k, l, m;

	l = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		m = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				l++;
				m = 1;

			}
		}
		if (m == 0)
		{
			return (c);
		}

	}
	return (0);

}
