/*
 * File: 1-Last_digit.c
 * Auth: Umar Faruk A <talk2ufaz@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - Printst the last digit of a  
 * 
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
       	last_digit = n%10;

	if (last_digit > 0 && last_digit < 6)
	{
		printf("The last digit of %d is %d and is lessthan 6 and not 0\n", n,last_digit);
	}
	else if (last_digit == 0)
	{
		printf("The last digit of %d  is %d and is 0\n",n, last_digit);
	}
	else
	{
		printf("The last digit of %d is %d and is greater than 5",n, last_digit);
	}



	return (0);
}
