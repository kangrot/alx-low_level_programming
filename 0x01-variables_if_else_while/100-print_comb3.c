#include <stdio.h>
/**
 * main- main function
 * Description: prints all possible different cominations of two digits
 * should be separatwed by commas
 * should print only the smallest combinations of two digits
 * should be printed in ascending order
 *
 * Return: 0 always
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
