#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, const unsigned int));

		if (a != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
