#include <stdio.h>

/**
 * main - Prints all single digit number
 *	of base 10 starting from 0
 *
 * Return: Always (0)
 */
int main(void)
{
	int k;
	int result;

	for (k = 0; k < 10; k++)
	{
		result = k % 10;
		putchar(result + '0');
	}
	putchar('\n');
	return (0);
}
