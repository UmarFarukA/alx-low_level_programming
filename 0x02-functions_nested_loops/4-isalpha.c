#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if character is alpha
 * @c: The character to pass
 * Return: 1 if true else 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
