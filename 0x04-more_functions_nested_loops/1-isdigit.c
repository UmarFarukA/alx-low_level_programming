#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if character is a digit
 * @c: The character passed
 * Return: 1 if true otherwise 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
