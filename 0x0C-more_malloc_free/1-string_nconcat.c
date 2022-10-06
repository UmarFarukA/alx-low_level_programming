#include <stdlib.h>
#include <string.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second String
 * @n: Number of characters
 * Return: Pointer to memory with s1 & n of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len;

	len = strlen(s2);
	if (n >= len)
	{
		ptr = malloc(sizeof(s1) + sizeof(s2));
		if (ptr == NULL)
			return (NULL);
		else
			ptr = strncat(s1, s2, n);
			return (ptr);
	}
	else if (s1 == NULL || s2 == NULL)
	{
		ptr = malloc(strlen(s1));
		return (ptr);
	}
}
