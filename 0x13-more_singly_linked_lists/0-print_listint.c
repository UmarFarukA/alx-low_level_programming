#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all elements
 * @h: Pointer to list
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
