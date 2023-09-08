#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - space that contains copy of a string
 * @str: string given as parameter
 *
 * Return: pointer to duplicated string else NULL
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(strlen(str) + 1);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);

	free(duplicate);
}
