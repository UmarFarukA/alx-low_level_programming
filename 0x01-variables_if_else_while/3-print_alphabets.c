#include <stdio.h>

/**
 * main - Print alphabets in l and u
 * Return: Always (0).
 */
int main(void)
{
	char s;
	char u;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
