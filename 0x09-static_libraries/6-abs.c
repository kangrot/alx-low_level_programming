#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the number to be checked
 *
 * Return: returns 0
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
