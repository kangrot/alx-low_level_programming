#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: array size
 * @c: character to initialize array
 *
 * Return: pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);

	free(arr);
}
