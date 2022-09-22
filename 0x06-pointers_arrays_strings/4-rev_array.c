#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n);

/**
 * reverse_array - Reverse an arry elements
 * @a: The array
 * @n: The number of elements in 'a'
 */
void reverse_array(int *a, int n)
{
	int j;

	for (j = n - 1; j >= 0; j--)
	{
		if (j == 0)
		{
			printf("%d\n", *(a));
		}
		else
		{
			printf("%d, ", *(a + j));
		}
	}
}
