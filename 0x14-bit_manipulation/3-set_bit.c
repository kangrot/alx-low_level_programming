#include <stdio.h>
#include "main.h"
/**
 * set_bit - set bit at an index to 1
 * @n: integer to change
 * @index: index of n to set to 1
 * Return: 1 if successful -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
