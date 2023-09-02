#include "main.h"
/**
 * _strlen - checks lenght of a string
 * @s: pointer variable of type char
 *
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
