#include <stdio.h>

/**
 * main - Print all letters except q and e
 *
 * Return: Always(0)
 */
int main(void)
{
	char i;

	for (i == 'a'; i <= 'z'; i++)
	{
		if (i != 'q' || i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
