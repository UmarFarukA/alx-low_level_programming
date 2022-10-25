#include "lists.h"

/**
 * list_len - Return number of lement in linked list
 * @h: Pointer to the list
 *
 * Return: Number of element
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}
