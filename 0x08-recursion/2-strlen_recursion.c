#include "main.h"

void _strlen_recursion(char *s);

/**
 * _strlen_recursion - Get length of string
 * @s: The string passed
 * Return: Void
 */
void _strlen_recursion(char *s)
{
	int k = strlen(s);
	_putchar(k);
}
