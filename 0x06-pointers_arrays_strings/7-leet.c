#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: stirng to be encoded
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
	int i, j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
