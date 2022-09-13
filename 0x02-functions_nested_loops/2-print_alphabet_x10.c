#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x.
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
