#include "function_pointers.h"

/**
 * array_iterator - Iterates over array elements
 * @array: The array Name
 * @size: Size of of array
 * @action: Pointer to act on array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int k;

	if (action == NULL || array == NULL)
	{
	}
	else if (size <= 0)
	{
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			actioin(*array + k);
		}
	}
}
