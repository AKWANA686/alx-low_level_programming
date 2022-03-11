#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description - prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	
	}
	putchar('\n');

	return (0);

}	
