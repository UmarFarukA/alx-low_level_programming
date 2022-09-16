#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: The number of diagonal lines
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 1;

		while (j <= n)
		{
			int k = 0;

			while (k < j)
			{
				_putchar(' ');
				k++;
			}
			j++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
		

