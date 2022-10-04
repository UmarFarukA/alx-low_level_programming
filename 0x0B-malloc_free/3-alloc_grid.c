#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height);

/**
 * alloc_grid - 2-dim of array of integers
 * @width: Width of array
 * @height: Height of array
 * Return: 2-dim Array
 */
int **alloc_grid(int width, int height)
{
	int *pt1;
	int i;
	int **ptr;
	int w;
	int h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **)malloc(sizeof(height) * (width * height));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (h = 0; h < height; h++)
			{
				for (w = 0; w < width; w++)
				{
					ptr[h][w] = 0;
				}
			}
		}
		return (ptr);
	}
}
