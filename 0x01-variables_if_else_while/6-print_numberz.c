#include <stdio.h>

/**
 * main - prints single digit base 10 numbers starting from 0
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
