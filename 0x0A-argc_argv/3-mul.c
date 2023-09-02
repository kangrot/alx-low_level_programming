#include <stdio.h>
#include <stdlib.h>

/**
 * main - multtiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return 0 if succesful, return 1 if argc > 2
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		int sum = x * y;

		printf("%d\n", sum);
	}
	return (0);
}
