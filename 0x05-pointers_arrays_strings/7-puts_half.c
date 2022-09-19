#include <string.h>
#include "main.h"

void puts_half(char *str);

/**
 * puts_half - Prints half of a string
 * @str: Passed String
 * Return: Nothing
 */
void puts_half(char *str)
{
	int j;
	int len;

	len = strlen(str);
	half_len = strlen(str) / 2;
	for (j = half_len; j <= len; j++)
	{
		if (str[half_len] != '\0')
			_putchar(str[half_len]);
		else
			continue;
	}
	_putchar('\n');
