#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n);

/**
 * reverse_array - Reverses an array element
 * @a: The array we consider
 * @n: The size of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int j;

	for (j = n; n >= 0; j--)
	{
		if (j == 0)
			printf("%d\n", a[j]);
		else
			printf("%d, ", a[j]);
	}
	return (0);
}