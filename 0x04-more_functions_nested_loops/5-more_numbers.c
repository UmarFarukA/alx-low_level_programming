#include "main.h"

/**
 * more_numbers - Prints more numbers x14
 *
 * Return: void
 */
void more_numbers(void)
{
	int j = 0;
	int k = 0;

	while (j <= 10)
	{
		while (k <= 14)
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
