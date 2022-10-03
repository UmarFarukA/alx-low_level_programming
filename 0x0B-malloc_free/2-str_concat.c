#include <string.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2);

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second String
 * Return: s1 conat with s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		ptr = ' ';
		return (ptr);
	}
	else
	{
		ptr = malloc(sizeof(s1));
		ptr = strcat(s1, s2);
		return (ptr);
	}
}
