#include <stdio.h>
#include "_putchar.c"

int print_alphabet(void);
/**
 * main - Called the print function
 *
 * Return: Alwyays (0)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: Always (0).
 */
int print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
