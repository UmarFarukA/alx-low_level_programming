#include <stdio.h>

/**
 * main - Prints fizz, buzz and fizzbuzz
 *
 * Return: Always (0).
 */
int main(void)
{
	int k = 1;

	while (k <= 100)
	{
		if ((k % 5 == 0) && (k % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (k % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (k % 5 == 0)
		{
			if (k == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%d ", k);
		}
		k++;
	}
	return (0);
}
