#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks if character is upper
 * @c: THe character passed
 * Return: 1 if true otherwise 0.
 */
int _isupper(int c)
{
	int k;

	if (isupper(c))
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	return (k);
}
