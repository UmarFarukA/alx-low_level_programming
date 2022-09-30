#include <stdlib.h>
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
	int n1;
	int n2;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		result = n1 * n2;
		printf("%d\n", result);
	}
	return (0);
}
