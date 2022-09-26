#include <stdio.h>
#include <string.h>
#include "main.h"

void print_chessboard(char (*a)[8]);

/**
 * print_chessboard - Printt chess board
 * @a: The string to use
 * Return: A chessboard patter
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 0 || i == 1 || i == 6 || i == 7)
			{
				printf("'%c',", a[i][j]);
			}
			else
			{
				printf("'%c'", ' ');
			}
		}
	}
}
