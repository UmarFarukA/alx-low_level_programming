#include "main.h"

/**
 * more_numbers - Prints more numbers x14
 *
 * Return: void
 */
void more_numbers(void)
{
	char j = '1';

	while (j <= '10')
	{
		char k = '0';

		while (k <= '14')
		{
			_putchar(k);
			k++;
		}
		j++;
	_putchar('\n');
	}
_putchar('\n');
}
