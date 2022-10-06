#include <stdlib.h>

void *malloc_checked(unsigned int b);

/**
 * malloc_checked - Check for creation of pointer
 * @b: Exit value
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
		return (ptr);
	else
		exit(98);
}
