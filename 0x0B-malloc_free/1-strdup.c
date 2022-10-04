#include <stdlib.h>
#include "main.h"

char *_strdup(char *str);

/**
 * _strdup - Duplicates a string
 * @str: The string passed
 * Return: Pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int j;

	j = 0;
	ptr = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[j] != '\0')
		{
			ptr[j] = str[j];
			j++;
		}
		return (ptr);
	}
}
