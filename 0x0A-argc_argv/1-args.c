#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
