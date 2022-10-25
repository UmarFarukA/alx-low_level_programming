#include "lists.h"

/**
 * sum_listint - Sum list of int
 * @head: Pointer to nodes
 * Return: SUm of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
