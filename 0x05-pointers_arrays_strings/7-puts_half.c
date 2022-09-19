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
	int mid;
	int len;
	int fl;
	int j;

	len = strlen(str);
	fl = len % 2;
	if (fl == 0)
	{
		mid = len / 2;
		for (j = mid; j <= len; j++)
		{
			if (str[j] != '\0')
				_putchar(str[j]);
			else
				continue;
		}
	}
	else
	{
		mid = (len - 1) / 2;
		for (j = mid; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
