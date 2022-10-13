#include "variadic_functions.h"

/**
 * sum_them_all - Sum all integers
 * @n: The number of elements
 * @...: A variable number of arguments
 * Return: Sum of elements
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int x, total;
	va_list ptr;

	total = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ptr, n);
		for (j = 0; j < n; j++)
		{
			x = va_arg(ptr, unsigned int);
			total += x;
		}
		va_end(ptr);
		return (total);
	}
}
