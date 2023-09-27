#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	first = second = head;
	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			first = second;
			break;
		}
	}
	if (!first || !second || !second->next)
		return (NULL);
	while (first != second)
	{
		first = first->next;
		second = second->next;
	}
	return (second);
}
