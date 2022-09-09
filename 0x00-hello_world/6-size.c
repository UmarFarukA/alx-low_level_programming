#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	printf("Size of char: %u byte(s)\n", sizeof(char));
	printf("size of int: %u byte(s)\n", sizeof(int));
	printf("Size of long int: %u byte(s)\n", sizeof(long int));
	printf("Size of float: %u byte(s)\n", sizeof(float));
	printf("Size of long long int: %u byte(s)\n", sizeof(long long int));

	return (0);

}
