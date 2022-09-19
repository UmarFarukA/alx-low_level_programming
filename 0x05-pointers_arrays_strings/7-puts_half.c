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
	int f_l;
	int half_len;

	len = strlen(str);
	f_l = len % 2;
	if (f_l == 0)
		half_len = f_l / 2;
	else
		half_len = (f_l + 1) / 2;
	for (j = half_len; j <= len; j++)
	{
		if (str[half_len] != '\0')
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
