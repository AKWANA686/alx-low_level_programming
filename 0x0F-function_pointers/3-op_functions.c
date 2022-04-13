#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * @a: int one
 * @b: int two
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: int one
 * @b: int two
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 * @a: int one
 * @b: int two
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of a and b
 * @a: int one
 * @b: int two
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: int one
 * @b: int two
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
