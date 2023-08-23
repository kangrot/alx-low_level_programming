#include "main.h"
/**
 * swap_int - swaps the values of a and b
 * @a: int to be swapped
 * @b: other int to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
