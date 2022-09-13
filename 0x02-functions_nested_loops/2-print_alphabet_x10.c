#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x.
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	char j = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
