#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description - program that assigns a random number and determines its last digit
 * Prints phrase
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
	else if (x == o)
		printf("Last digit of %i is %i and is 0\n", n, x);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);

	return (0);


}
