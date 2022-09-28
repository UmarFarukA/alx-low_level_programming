#include <stdio.h>
#include "main.h"

void _print_rev_recursion(char *s);

/**
 * _print_rev_recursion - Print reverse string
 * @s: The string passed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
	printf("%c", *s);
}
