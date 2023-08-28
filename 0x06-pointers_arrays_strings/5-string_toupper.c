#include "main.h"
/**
 * string_toupper - converts lowercase to uppercase
 * @str: string to be converted
 *
 * Return: the converted string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
