#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list (list_t)
 * @h: pointer to list_t to print
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}

	return (count);
}
