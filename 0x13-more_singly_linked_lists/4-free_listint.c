#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the begining
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *container;

	while (head != NULL)
	{
		container = head->next;
		free(head);
		head = container;
	}
}
