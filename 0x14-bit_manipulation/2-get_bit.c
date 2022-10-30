#include "main.h"

/**
 * get_bit - Returns the of a given value at index
 * @n: THe number passed
 * @index: THe index
 * Return: The value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (0);
}
