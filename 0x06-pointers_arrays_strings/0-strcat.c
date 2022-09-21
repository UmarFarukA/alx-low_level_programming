#include <string.h>
#include "main.h"

char *_strcat(char *dest, char *src);

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: source string
 * Return: Concatenated string od dest and src
 */
char _strcat(char *dest, char *src)
{
	return (strcat(src, dest));
}
