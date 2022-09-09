/**
 * File: 8-print_base16.c
 * Auth: Umar Faruk A
 */

#include <stdio.h>

/**
 * main - Print all number s of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);

}
