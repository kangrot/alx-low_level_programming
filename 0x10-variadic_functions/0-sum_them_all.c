#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	unsigned int current_arg;

	va_list args;

	va_start(args, n);

	current_arg = va_arg(args, int);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += current_arg;
	}

	va_end(args);

	return (sum);
}
