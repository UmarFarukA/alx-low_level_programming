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

	if (separator == NULL)
	{
	}
	else
	{
		va_list ptr;

		va_start(ptr, n);
		for (j = 0; j < n; j++)
		{
			x = va_arg(ptr, unsigned int);
			if (j != n - 1)
				printf("%d%s", x, separator);
			else
				printf("%d", x);
		}
		va_end(ptr);
		printf("\n");
	}
}
