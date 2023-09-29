#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to stirng of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		converted_num <<= 1;
		converted_num |= (*b - '0');

		b++;
	}

	return (converted_num);
}
