#include <stdio.h>
/**
 * main - checks for largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long i, n;

	n = 612852475143;

	for (i = 2; n > i; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu", i);
	putchar('\n');
	return (0);
}
