#include "main.h"

void _print_rev_recursion(char *s);

/**
 * _print_rev_recursion - Print strings in reversse
 * @s: The string passed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	int j;

	j = (s[0] / sizeof(s)) - 1;
	while (j >= 0)
	{
		if (s[j] != '\0')
			_putchar(s[j]);
		else
			j--;
	}
}
