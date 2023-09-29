#include <stdio.h>
#include "main.h"


/**
 * get_endianness - checks for endianness in file
 * Return: 0 if big endian or 1 if little
 */

int get_endianness(void)

{

	unsigned int val  = 1;

	char *c = (char *) &val;

	if (*c == 1)
		return (1);
	else
		return (0);
}
