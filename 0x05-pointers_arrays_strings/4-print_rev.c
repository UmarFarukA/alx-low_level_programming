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
	int k;

	len = strlen(s);
	for (k = len; k > 0; k--)
	{
		if (s[k] != '\0')
		{
			_putchar(s[k]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
