#include "function_pointers.c"

/**
 * array_iterator - Iterates over array elements
 * @array: The array Name
 * @size: Size of of array
 * @action: Pointer to act on array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;

	if (size < 0)
	{
		return;
	}
	else if (action == NULL)
	{
		return;
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			action(array + j);
		}
	}
}
