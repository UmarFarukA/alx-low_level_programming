#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free used memory
 * @head: Pointer to list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
