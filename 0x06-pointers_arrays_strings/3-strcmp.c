#include <string.h>
#include "main.h"

int _strcmp(char *s1, char *s2);

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second String
 * Return: 1 if not same otherwise 0.
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = strcmp(s1, s2);
	if (j < 0)
		return (j);
	else if (j == 0)
		return (j);
	else
		return (j);
}
