#include <stdio.h>
#include <string.h>
#include "main.h"

char *_strcpy(char *dest, char *src);

/**
 * _strcpy - String cpy func
 * @dest: destination string
 * @src: source string
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
