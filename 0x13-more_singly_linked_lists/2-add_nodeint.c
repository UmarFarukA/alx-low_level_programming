#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a node integer
 * @head: A pointer to the node
 * @n: Integer to add
 * Return: A new node at the beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
}
