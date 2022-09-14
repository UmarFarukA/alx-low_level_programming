#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print Natural Numbers
 * @n: THe nutaul number passed
 * Return: NAtural numberse
 */
void print_to_98(int n)
{
	int last = 98;

	if (n > 98)
	{
		int k;

		for (k = n; k > 98; k--)
		{
			printf("%d, ", k);
		}
		printf("%d", last);
	}
	else if (n < 98)
	{
		int j;

		for (j = n; j < 98; j++)
		{
			printf("%d, ", j);
		}
		printf("%d", last);
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
}
