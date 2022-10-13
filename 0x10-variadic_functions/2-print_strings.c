#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings
 * @separator: Character that separates strings
 * @n: Number of strings
 * @...: A number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;

	if (separator == NULL)
	{
	}
	else
	{
		va_list ptr;

		va_start(ptr, n);
		for (j = 0; j < n; j++)
		{
			str = va_arg(ptr, char *);
			if (str != NULL)
			{
				if (j != n - 1)
					printf("%s%s", str, separator);
				else
					printf("%s", str);
			}
			else
			{
				printf("%s", "(nil)");
			}
		}
		printf("\n");
		va_end(ptr);
	}
}
