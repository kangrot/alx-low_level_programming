#include "lists.h"

/**
 * sum_listint - sum of data in linked list
 * @head: pointer to the head of the list
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int summation = 0;

	while (head != NULL)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
