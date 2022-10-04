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
	int k;

	j = 0;
	k = 0;
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
			k++;
			j++;
		}
		while (str[j] != '\0')
		{
			ptr[j] = str[j];
			j++;
		}
		ptr[k] = '\0';
		return (ptr);
	}
}
