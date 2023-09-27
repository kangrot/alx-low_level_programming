#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - locates a node of a listint_t linked list
 * @index: index of node to locate
 * @head: pointer to the first node
 * Return:pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int to_find;

	if (head == NULL)
		return (NULL);
	for (to_find = 0; to_find < index; to_find++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
