#include <ctype.h>
#include <string.h>
#include "main.h"

char *string_toupper(char *a);

/**
 * string_toupper - Changeletter case t
 * @a: String
 * Return: String
 */
char *string_toupper(char *a)
{
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		if (a[j] >= 'a' && a[j] <= 'Z')
		{
			a[j] = a[j] - 32;
		}
	}
	return (a);
}
