#include <string.h>
#include "main.h"

char *_strpbrk(char *s, char *accept);

/**
 * _strpbrk - Search first byttes in s
 * @S: The string to search
 * @accept: String we will search
 * Return: Pointer o the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
