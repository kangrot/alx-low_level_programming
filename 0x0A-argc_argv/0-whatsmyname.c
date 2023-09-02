#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{

/* to avoid the unused variable error */
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
