#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description - enter a random number
 * determine if it is negative or positive
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;

	if ( n > 0 )
		printf("%d is positve\n", n);
	else if ( n == 0 )
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
