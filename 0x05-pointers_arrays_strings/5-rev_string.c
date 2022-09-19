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
	char rev;`
	int j;

	len = strlen(s);
	rev[len];
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
