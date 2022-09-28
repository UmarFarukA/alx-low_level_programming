#include "main.h"

int factorial(int n);

/**
 * factorial - Returns the factorial of n
 * @n: The parameter
 * Return: 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
