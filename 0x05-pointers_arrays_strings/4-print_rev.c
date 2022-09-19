#include <string.h>
#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: The string passed
 * Return: Reverse string
 */
void print_rev(char *s)
{
	int len;
	int j;

	len = strlen(s);
	for (j = len; len > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
