#include <string.h>
#include "main.h"

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
	char rev[len];
	for (j = len; j >= 0; j--)
	{
		if (s[j] != '\0')
		{
			rev[len - j] = s[j];
		}
		else
		{
			continue;
		}
	}
	return (rev);
}
