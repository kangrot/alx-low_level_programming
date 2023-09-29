#include <stdio.h>
#include "main.h"
/**
 * get_bit - value of bit at an index
 * @n: unsigned long integer to check index
 * @index: index to check
 * Return: return value at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_at_index = (n >> index) & 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (bit_at_index);
}
