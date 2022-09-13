#include <stdio.h>
#include "_putchar.c"

void print_alphabet_x10(void);

/**
 * main - Called the print_alphabet_x10
 *
 * Return: Always (0).
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

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
