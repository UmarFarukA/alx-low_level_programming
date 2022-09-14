#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print Natural Numbers
 * @n: THe nutaul number passed
 * Return: NAtural numberse
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		int k;

		for (k = n; k >= 98; k--)
		{
			printf("%d, ", k);
		}
	}
	else if (n < 98)
	{
		int j;

		for (j = n; j <= 98; j++)
		{
			printf("%d, ", j);
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	return (0);
}
