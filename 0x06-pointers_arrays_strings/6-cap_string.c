#include <stdio.h>
#include "main.h"

char *cap_string(char *s);

/**
 * cap_string - Capitalize string
 * @s: THe string passed
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int j;

	for (j = 0; s[j] != 0; j++)
	{
		if (j == 0)
		{
			if (s[j] >= 'a' && s[j] <= 'Z')
			{
				s[j] = s[j] - 32;
			}
			else
			{
				continue;
			}
		}
		else if (s[j] == ' ')
		{
			j++;
			if (s[j] >= 'a' && s[j] <= 'Z')
			{
				s[j] = s[j] - 32;
				continue;
			}
		}
		else if (s[j] == ',' || s[j] == '.' || s[j] == '!')
		{
			j++;
			if (s[j] >= 'a' && s[j] <= 'Z')
			{
				s[j] = s[j] - 32;
				continue;
			}
		}
		else
			if (s[j] >= 'A' && s[j] <= 'Z')
				s[j] = s[j] + 32;
	}
