#include <string.h>
#include "main.h"

int _pow_recursion(int x, int y);

/**
 * _pow_recursion - x raiseto the power of y
 * @x: value to raise to.
 * @y: value to raise
 * Return: x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (pow(x, y));
	}
}
