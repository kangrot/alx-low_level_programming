#include <stdio.h>
#include "main.h"
/**
 * flip_bits - number of bits to be flipped
 * @n: unsigned long int to be flipped
 * @m: unsigned long int to be flipped to
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, counter = 0;

	num = n ^ m;

	while (num)
	{
		if (num & 1)
			counter++;
		num >>= 1;
	}
	return(counter);
}
