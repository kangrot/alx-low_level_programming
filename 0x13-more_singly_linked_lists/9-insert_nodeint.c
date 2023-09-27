#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - Inserts new node.
* @head: Pointer to head.
* @index: Node to insert.
* @n: Data of the new node.
* Return: Address of the new node otherwise NULL.
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *i, *new;

	i = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = i;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		i = i->next;
		index--;
		if (!i)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = i->next;
	i->next = new;
	return (new);
}
