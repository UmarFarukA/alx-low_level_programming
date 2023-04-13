#include "search_algos.h"

/**
 * binary_search - searches for element in sorted
 *                 array using binary search
 * @array: Pointer to the first element in array
 * @size: The size of the array
 * @value: The value to search
 *
 * Return: If not found or array NULL, -1 otherwise
 *         1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
