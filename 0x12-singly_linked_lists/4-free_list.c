#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free used memory
 * @head: Pointer to the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
