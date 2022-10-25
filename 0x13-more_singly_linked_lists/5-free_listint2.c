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

	if(*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
