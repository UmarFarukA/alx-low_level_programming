#include <unistd.h>
#include "main.h"

int _putchar(char c);

/**
 * _putchar - Print a character
 * @c: The character passed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
