#include <stdio.h>

/**
 * main - Prints alphabets in lower case
 *
 * Return: Always (0)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar('%c', i);
	}
	return (0);
}
