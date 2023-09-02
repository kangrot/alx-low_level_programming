#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be found
 *
 * Return: pointer to c, null if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
