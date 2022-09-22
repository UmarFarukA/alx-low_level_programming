#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n);

/**
 * reverse_array - Reverse an arry elements
 * @a: The array
 * @n: The number of elements in 'a'
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int j;

	for (j = n - 1; j >= 0; j--)
	{
		if (j == 0)
		{
			_putchar(*(a));
		}
		else
		{
			_putchar(*(a + j));
			_putchar(', ');
		}
	}
	_putchar('\n');
}
