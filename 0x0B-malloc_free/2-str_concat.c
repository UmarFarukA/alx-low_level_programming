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
	int i;

	j = 0;
	if (s1 == NULL)
		ptr = malloc(sizeof(s2));
	else if (s2 == NULL)
		ptr = malloc(sizeof(s1));
	else if (s2 == NULL && s1 == NULL)
		ptr = malloc(2);
	else
		ptr = malloc(sizeof(s1) + sizeof(s2));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			ptr[j] = s1[k];
			j++;
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
}
