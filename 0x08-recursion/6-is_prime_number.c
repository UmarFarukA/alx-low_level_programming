#include <stdio.h>
#include "main.h"

int is_prime_number(int n);

/**
 * is_prime_number - Check for a prime number
 * @n: THe number to check
 * Return: 1 if true ootherwise 0.
 */
int is_prime_number(int n)
{
	int j;
	int k;

	k = 0;
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		for (j = 2; j < n; j++)
		{
			if (n % j == 0)
				k = k + 1;
			else
				continue;
		}
	}
	if (k > 0)
		return (0);
	else
		return (1);
}
