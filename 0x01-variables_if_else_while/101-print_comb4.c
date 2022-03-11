#include <stdio.h>

/**
 * main - main block
 * Description - prints different combinations of three digits
 * separated by ,, followed by a space
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 38; a < 48; a++)
	{
		for (b = 39; b < 48; b++)
		{
			for (c = 40; c < 48; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 45 || b != 46)
					{
						putchar(',');
						putchar(' ');


					}

				}

			}

		}

	}
	putchar('\n');

	return (0);


}
