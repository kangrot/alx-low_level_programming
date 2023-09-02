#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to store bytes
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: returns pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
