#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Free used memory
 * @head: Pointer to list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
