#include "lists.h"

/**
 * listint_len - Print the number of nodes
 * @h: Pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
