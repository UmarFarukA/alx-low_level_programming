#include "main.h"

/**
 * set_bit - Set the value of a bit
 * @n: The value passed
 * @index: The index
 * Return: 1 if worked otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
