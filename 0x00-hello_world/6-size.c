/**
 * File: 6-size.c
 * Auth: Umar Faruk A <talk2ufaz@gmail.com>
 */

#include <stdio.h>

/**
 * main - Print the size of  various types on the commputer
 *
 * Return: Always (0)
 */

int main(void)
{
	printf("Size of char: %u bytes", sizeof(char));
	printf("size of int: %u bytes", sizeof(int));
	printf("Size of long int: %u bytes", sizeof(long int));
	printf("Size of float: %u bytes", sizeof(float));
	printf("Size of long long int: %u bytes", sizeof(long long int));

	return (0);

}
