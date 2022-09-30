#include <string.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept);

/**
 * _strspn - Get length of prefix string
 * @s: The initial String
 * @accept: The string to match
 * Return: lenght of match string
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
