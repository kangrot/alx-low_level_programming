#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets value at an index to 0
 * @n: unsigned long it to change
 * @index: index to set to 0
 * Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);

	return (1);
}
