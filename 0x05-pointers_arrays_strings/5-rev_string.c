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
	int k;
	int j;

	len = strlen(s);
	char rev[12];
	for (j = len; j >= 0; j--)
	{
		k = len - j;
		if (s[j] != '\0')
		{
			rev[k] = s[j];
		}
		else
		{
			continue;
		}
	}
}
