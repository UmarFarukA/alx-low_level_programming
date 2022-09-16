#include "main.h"

/**
 * more_numbers - Prints more numbers x14
 *
 * Return: void
 */
void more_numbers(void)
{
	int j = 1;

	while (j <= 10)
	{
		int k = 0;

		while (k <= 14)
		{
			_putchar(k);
			k++;
		}
		j++;
		_putchar('\n');
	}
}
