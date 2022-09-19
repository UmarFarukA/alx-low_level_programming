#include <string.h>
#include "main.h"

void puts2(char *str);

/**
 * puts2 - Print every other character
 * @str: The string passed
 * Return: Nothing
 */
void puts2(char *str)
{
	int j;
	int len;

	len = strlen(str);
	for (j = 0; j <= len; j = j + 2)
	{
		if (str[j] != '\0')
		{
			_putchar(str[j]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
