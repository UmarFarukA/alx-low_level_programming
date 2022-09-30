#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks if character is upper
 * @c: The character passed
 * Return: 1 if true c is upper otherwise 0.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
