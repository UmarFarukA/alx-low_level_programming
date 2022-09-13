#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: Alwyays (0)
 */
void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
