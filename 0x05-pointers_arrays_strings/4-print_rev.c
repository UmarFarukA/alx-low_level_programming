#include <string.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: The string passed
 * Return: Reverse string
 */
void print_rev(char *s)
{
	char k;

	k = strrev(s);
	_putchar(s);
	_putchar('\n');
}
