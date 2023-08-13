#include <stdio.h>

/**
 * main - prints all letters except q and e
 *
 * Return: zero always
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
