#include "main"

/**
 * print_triangle - Print triangle shape
 * @size: The size and argument passed
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		char s = ' ';
		int j = 1;

		while (size >= j)
		{

