#include <stdio.h>

/**
 * main - main block
 * Description - prints different combinations of two digits
 * must be separated by , followed by space
 * printed in ascending order
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <=56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				
				}
			
			}
		
		
		}
	
	
	}
	putchar('\n');

	return (0);
}
