#include "main.h"
/**
 * factorial -  finds the factorial of a number
 * @n: the number to be checked
 *
 * Return: -1 if n < 0(error)
 * 1 if n is 0
 * factorial value if otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
