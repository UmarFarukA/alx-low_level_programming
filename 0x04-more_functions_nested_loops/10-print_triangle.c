#include "main"

/**
 * print_triangle - Print triangle shape
 * @size: The size and argument passed
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 1;
		int k = 0;
		int space;

		while (size > j)
		{
			space = size - j;
			while (k < size)
			{
				if (space > k)
					_putchar(' ');
				else
					_putchar('#');
				k++;
			}
			j++;
			k = 0;
			_putchar('\n');
		}
	}
}
