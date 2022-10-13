#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print Numbers
 * @separator: A character that separates numbers
 * @n: Number of element
 * @...: A variable number of argument
 */
void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int j, x;
	va_list ptr;

	if (separator == NULL)
	{
	}
	else
	{
		va_start(ptr, n);
		for (j = 0; j < n; j++)
		{
			x = va_arg(ptr, unsigned int);
			if (j != n - 1)
				printf("%d%s", x, separator);
			else
				printf("%d\n", x);
		}
		va_end(ptr);
	}
}
