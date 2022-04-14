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

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	printf("\n");

	va_end(ap);
}
