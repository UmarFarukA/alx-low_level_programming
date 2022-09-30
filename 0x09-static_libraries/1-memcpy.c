#include <string.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _memcpy - Copy's memory area
 * @dest: destination of content
 * @src: sourceof content
 * @n: numberof bytes
 * Return: destination with more bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
