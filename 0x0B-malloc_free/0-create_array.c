#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: char to be stored
 *
 * Return: pointer to the arry if successful, if not NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);

}
