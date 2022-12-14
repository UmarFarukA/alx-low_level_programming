#include <string.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - Concatenate strings
 * @dest: First string
 * @src: Second String
 * @n: Number of characters to
 * Return: A pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
