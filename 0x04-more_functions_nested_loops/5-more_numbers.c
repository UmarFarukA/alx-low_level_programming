#include "main.h"

/**
 * more_numbers - Prints more numbers x14
 *
 * Return: 0
 */
void more_numbers(void)
{
	char j;

	for (j = '1'; j <= '10'; j++)
	{
		char k;

		for (k = '0'; k <= '14'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
