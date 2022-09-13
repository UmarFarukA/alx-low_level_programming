#include <unistd.h>
int _putchar(char c);
/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: void on successful write to stdout
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
