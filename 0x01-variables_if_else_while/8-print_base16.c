#include <stdio.h>
/**
 * main - prints the numbers of base 16 in lowercase
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
