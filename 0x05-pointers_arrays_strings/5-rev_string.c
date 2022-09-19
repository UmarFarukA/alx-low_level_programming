#include <string.h>
#include "main.h"

void rev_string(char *s);

/**
 * rev_string - REverse a string
 * @s: The string to reverse
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int j;

	len = strlen(s);
	for (j = 0; j <= len; j++)
	{
		if (s[j] == '\0')
			continue;
		else
			_putchar(s[j]);
	}
	_putchar('\n');
	for (j = len; j >= 0; j--)
	{
		if (s[j] != '\0')
		{
			_putchar(s[j]);
		}
		else
		{
			continue;
		}
	}
}
