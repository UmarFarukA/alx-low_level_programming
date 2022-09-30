#include <stdio.h>

/**
 * main - Prints all Arguments
 * @argc: Args count
 * @argv: Args vector
 * Return: All
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
