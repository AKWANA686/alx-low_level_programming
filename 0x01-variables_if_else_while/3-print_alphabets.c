#include <stdio.h>

/**
 * main - main block
 * Description - prints alphabet in lowercase
 * prints in uppercase folowed by new line
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
