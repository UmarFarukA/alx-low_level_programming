#include <string.h>
#include <stdio.h>
#include "main.h"

void print_diagsums(int *a, int size);

/**
 * print_diagsums - sum elements in diagonal
 * @a: array a of elements
 * @size: size of array
 * Return: sum of diagnomals element
 */
void print_diagsums(int *a, int size)
{
	int j;
	int k;
	int sum;

	sum = 0;
	k = 0;
	j = 0;
	while (k < size)
	{
		while (j < size)
		{
			sum = sum + (a[k][j]);
			break;
		}
		k = k + 1;
		j = j + 1;
	}
	return (sum);
}
