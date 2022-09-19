#include <stdio.h>
#include "main.h"

void print_array(int *a, int n);
/**
 * print_array - Prints number of elements
 * @a: The array of elements
 * @n: THe number of elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == n - 1)
			printf("%d\n", *(a + j));
		else
			printf("%d, ", *(a + j));
	}
}
