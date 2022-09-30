#include <string.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);

/**
 * _memset - Generates random bytes
 * @n: number of bytes
 * @s: pointer to int
 * @b: constant byte
 * Return: Pointer memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
