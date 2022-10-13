#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all integers
 * @n: The number of elements
 * Return: Sum of elements
 */
int sum_them_all(const unsigned int n, ...)
{
	int j;
	int total;

	total = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list ptr;

		va_start(ptr, n);
		for (j = 0; j < n; j++)
		{
			total += va_arg(ptr, int);
		}
		va_end(ptr);
		return (total);
	}
}
