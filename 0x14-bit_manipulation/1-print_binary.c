#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary representation of a number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int b = 0, count, k, temp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	temp = n;

	while (temp != 0)
	{
		b++;
		temp = temp >> 1;
	}

	for (count = b - 1; count >= 0; count--)
	{
		k = n >> count;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
