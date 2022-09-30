#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if character is lower
 * @c: The charcter that will be pass
 * Return: 1 if true ortherwise 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
