#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the number of elements in the list
 * @h: pointer to list_t to print
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h != NULL)
		count++;
	if (h != NULL)
		count++;

	return (count);
}
