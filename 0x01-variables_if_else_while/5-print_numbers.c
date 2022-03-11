#include <stdio.h>

/**
 * main - main block
 * Description - prints base 10 numbers
 * starting from 0
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");
	return (0);
}
