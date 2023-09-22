#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: start of the list)
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present->str);
		free(present);
	}

	free(head);
}
