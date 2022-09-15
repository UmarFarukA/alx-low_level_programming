#include "main.h"

/**
 * print_square - Prints a square shape
 * @size: The size of the square to be printed
 * Return: void
 */
void print_sqaure(int size)
{
	int j = 1;
	int k = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j <= size)
		{
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
