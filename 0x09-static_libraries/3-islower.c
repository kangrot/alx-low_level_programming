#include "main.h"
/**
 * _islower - checks if c is lowercase
 *@c: the variable to be checked
 *
 * Return: returns 1 if true and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
