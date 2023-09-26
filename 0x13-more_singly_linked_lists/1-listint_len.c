#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of nodes/elements
 * @h: pointer to first node
 * Return: number of nodes/elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		num_elements++;

		h = h->next;
	}

	return (num_elements);
}
