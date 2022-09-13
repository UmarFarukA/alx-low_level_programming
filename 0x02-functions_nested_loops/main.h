#include <unistd.h>

/**
 * _putchar - write character to stdout
 * @c: THe character to print
 * Return: 1 on successful write to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
