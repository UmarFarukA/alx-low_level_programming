#include "main.h"

/**
 * print_line - Draws a line
 * @n: The number if characters to draw
 * Return: void
 */
void print_line(int n)
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
			_putchar('_');
			j++;
		}
	}
	_putchar('\n');
}
