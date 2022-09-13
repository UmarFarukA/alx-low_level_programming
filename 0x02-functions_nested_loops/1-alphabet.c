#include <stdio.h>
#include "_putchar.c"

void print_alphabet(void);
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
void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
	}
	_putchar('\n');
}
