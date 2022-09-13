#include "main.h"

/**
 * print_last_digit - Prints last digit of number
 * @n: THe integer to pass to function
 *
 * Return: Value of lastdigit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last, '0');
	return (last);
}
