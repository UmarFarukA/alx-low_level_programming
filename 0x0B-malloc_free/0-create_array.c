#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c);

/**
 * create_array - Creates array of char
 * @size: Size of the array
 * @c: The character to use
 * Return: A pointer or null
 */
char *create_array(unsigned int size, char c)
{
	int *ptr;
	int j;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(c) * size);
		if (ptr != NULL)
		{
			for (j = 0; j < size; j++)
			{
				ptr[j] = c;
			}
			return (ptr);
		}
		else
		{
			return (NULL);
		}
	}
}
