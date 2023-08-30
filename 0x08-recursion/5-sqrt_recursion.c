#include "main.h"
/**
 * sqroot - finds square root of a number
 * @x: parameter 1
 * @y: parameter 2
 *
 * Return: 1 on success
 */
int sqroot(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqroot(x, y + 1));
}

/**
 * _sqrt_recursion - finds square root of a number
 * @n: number to be checked
 *
 * Return: 1 on success
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
