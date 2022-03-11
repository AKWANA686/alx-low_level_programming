#include <stdio.h>

/**
 * main - main block
 * Description - prints alphabet in lowercase
 * Followed by a new line
 * print all letters except q and e
 * Return: 0
 */
int main(void)
{
		char a = 'a';


		while (a <= 'z')
		{
			if (a != 'q' && a != 'e')
			{
				putchar(a);
			}
			a++;
		}
		putchar('\n');

		return (0);
}
