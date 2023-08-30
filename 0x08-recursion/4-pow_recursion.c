#include "main.h"
/**
 * _pow_recursion - x raised to the power of y
 * @x: argument 1
 * @y: argument 2
 *
 * Return: if y < 0, return -1(error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
