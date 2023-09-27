#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: head of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (*head == NULL)
		return (0);

	first = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(first);

	return (i);
}
