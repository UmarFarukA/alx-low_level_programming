#include "main.h"

/**
 * print_square - Prints a square shape
 * @size: The size of the square to be printed
 * Return: void
 */
void print_sqaure(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 1;

		while (j <= size)
		{
			int k = 1;

			while (k <= size)
			{
				_putchar('#');
				k++;
			}
			j++;
			_putchar('\n');
		}
	}
}
