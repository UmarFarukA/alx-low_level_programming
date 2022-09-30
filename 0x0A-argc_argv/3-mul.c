#include <stdio.h>

/**
 * main - Multiply two args
 * @argc: Args count
 * @argv: Args vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc)
	{
		result = argv[1] * argv[2];
		printf("%d\n", result);
	}
	return (0);
}
