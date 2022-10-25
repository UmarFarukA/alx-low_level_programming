#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Add new node at the end
 * @head: Pointer to the start of the node
 * @str: String to add to the node
 * Return: Address of the new node created
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	list_t *newNode, *temp;
	int len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	newNode->str = dup_str;
	newNode->len = len;
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
