/**
 * File: 6-size.c
 * Auth: Umar Faruk A<talk2ufaz@gmail.com>
 */

#include <stdio.h>

/**
 * main- Print the size of  various types on the commputer
 *
 * Return: Always (0)
 */

int main(void)
{
	printf("Size of char in: %u bytes", sizeof(char));
	printf("size of int: %u in bytes", sizeof(int));
	printf("Size of long int: %u in bytes", sizeof(long int));
	printf("Size of float: %u in bytes", sizeof(float));

	return (0);

}
