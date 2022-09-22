#include <stdio.h>
#include  "main.h"

void reverse_array(int *a, int n);

/**
 * reverse_array - Reverses array elements
 * @a: The array to use
 * @n: Number of elements
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int j;

	for (j = n - 1; j >= 0; j--)
	{
		if (j == 0)
			printf("%d", *(a));
		else
			printf("%d, ", *(a + j));
	}
	_putchar('\n');
}
