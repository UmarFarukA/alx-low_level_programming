#include <string.h>
#include "main.h"

char *_strncpy(char *dest, char *src, int n);

/**
 * _strncpy - Copy n number of strings
 * @dest: destination string
 * @src: source string
 * @n: number of charcters to copy
 * Return: Dest with copied strings
 */
char _strncpy(char *dest, char *src, int n)
{
	int j;

	if (n <= 0)
	{
		return strncpy(dest, src, 0);
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			dest[j] = src[j];
		}
		return (dest);
	}
}
