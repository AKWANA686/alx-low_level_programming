#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;
	va_list list;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (j != (n - 1))
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");

	va_end(list);
}
