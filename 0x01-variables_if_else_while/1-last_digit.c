#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description - program that assigns a random number and determines its last digit
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 10)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (x == o)
		printf('"Last digit of %d is %d and is 0\n", n, x);
	else
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, x);

	return (0);


}
