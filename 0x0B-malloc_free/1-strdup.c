#include <stdlib.h>
#include <string.h>
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

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(str));
		if (ptr != NULL)
		{
			ptr = strdup(str);
			return (ptr);
		}
		else
		{
			return (NULL);
		}
	}
}
