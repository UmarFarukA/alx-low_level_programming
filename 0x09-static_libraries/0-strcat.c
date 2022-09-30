#include <string.h>
#include "main.h"

char *_strcat(char *dest, char *src);

/**
 * _strcat - Concat string
 * @dest: destination
 * @src: source string
 * Return: concat string
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
