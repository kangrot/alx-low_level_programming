#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer to the beginning
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *container;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		container = (*head)->next;
		free(*head);
		*head = container;
	}
}
