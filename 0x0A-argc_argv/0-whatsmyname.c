#include <stdio.h>

/**
 * main - Prints the name of program
 * @argc: Count the number of agrs
 * @argv: Array of args
 * Return: 0
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
