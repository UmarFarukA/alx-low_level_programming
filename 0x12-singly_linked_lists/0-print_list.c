#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print list of nodes
 * @h: Pointer to list
 * Return: The number of Nodes
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] [%s]\n", h->len, h->str);
		}
		num += 1;
		h = h->next;
	}
	return (num);
}
