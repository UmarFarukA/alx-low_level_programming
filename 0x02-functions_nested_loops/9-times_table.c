#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j < 9)
			{
				if (k < 10)
					printf("%d,  ", k);
				else
					printf("%d, ", k);
			}
			else
				printf("%d ", k);
		}
		printf("\n");
	}
}
