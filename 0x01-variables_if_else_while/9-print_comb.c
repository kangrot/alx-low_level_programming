#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: returns 0 always
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);

}
