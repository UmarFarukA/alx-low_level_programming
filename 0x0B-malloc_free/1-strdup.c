#include <stdlib.h>
#include "main.h"
#include <string.h>

char *_strdup(char *str);

/**
 * _strdup - Returns poiter to dup string
 * @str: The string passed
 * Return: Pointer to dup strings
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
		ptr = strdup(str);
		return (ptr);
	}
}
