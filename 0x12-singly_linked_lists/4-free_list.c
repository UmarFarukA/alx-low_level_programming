#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free used memory
 * @head: Pointer to the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
