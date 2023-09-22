#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds node to the end of list
 * @head: start
 * @str: string
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *present;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		present = *head;

		while (present->next != NULL)
			present = present->next;

		present->next = new_node;
	}
	return (new_node);
}
