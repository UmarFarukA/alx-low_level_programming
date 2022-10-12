#include "function_pointers.c"

/**
 * int_index - Searches for index
 * @array: The array to use
 * @sie: Size of the array
 * @cmp: Pointer to use
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	k = 0;
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else if (size <= 0)
	{
		return (-1);
	}
	else
	{
		while (k < size)
		{
			if (cmp(array[k]) != 0)
				return (k);
			else
				k++;
		}
		return (-1);
	}
}
			
