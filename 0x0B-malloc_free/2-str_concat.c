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

	int j;
	int k;

	j = 0;
	while (s1[j] != '\0')
	{
		++j;
	}

	for (k = 0; s2[k] != '\0'; k++, ++j)
	{
		s1[j] = s2[k];
	}
	s1[j] = '\0';
	ptr = malloc(sizeof(s1));
	return (ptr);
}
