#include "main.h"

/**
 * print_last_digit - Prints last digit of number
 * @n: Parameter passed
 * Return: Value of lastdigit
 */
int print_last_digit(int n)
{
	int last = n % 10;
	
	last = (last * 10) + last;
	return (last);
}
