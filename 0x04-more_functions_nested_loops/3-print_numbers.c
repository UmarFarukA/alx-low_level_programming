#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Print numbers 0-9
 *
 * Return: void.
 */
void print_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
