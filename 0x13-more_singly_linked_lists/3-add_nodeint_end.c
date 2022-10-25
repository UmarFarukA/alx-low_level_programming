#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a node at the end
 * @head: Pointer to the node
 * @n: The element to add
 * Return: New node added to the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (*head);
}
