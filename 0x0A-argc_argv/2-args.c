#include <stdio.h>

/**
 * main - prints received arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int count;

	count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
