#include "function_pointers.h"

/**
 * array_iterator - Iterates over array elements
 * @array: The array Name
 * @size: Size of of array
 * @action: Pointer to act on array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}
	else
	{
		for (j = 0; size > j; array++)
		{
			action(*array);
		}
	}
}
