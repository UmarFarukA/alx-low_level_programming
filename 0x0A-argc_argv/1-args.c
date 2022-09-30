#include <stdio.h>

/**
 * main - Print number of args
 * @argc: Counts of args
 * @argv: A vector
 * Return: Numberof args
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}

