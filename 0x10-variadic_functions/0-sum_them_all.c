#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the
 * sum of the parameters
 * @n: unsigned int
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (x = 0; x < n; x++)
		sum += va_arg(ap, const unsigned int);

	va_end(ap);
	return (sum);
}
