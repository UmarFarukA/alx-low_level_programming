/**
 * File: 7-prints_tehbahpla
 *
 * Auth: Umar Faruk A <talk2ufaz@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	int j;

	for (j = 'z'; j >= 'a'; j--)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
