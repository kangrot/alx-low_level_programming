#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - pointer to a 2-d array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return:pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **arr_2d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = malloc(height * sizeof(int));

	if (arr_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_2d[i] = malloc(width * sizeof(int));

		if (arr_2d == NULL)
		{

			for (j = 0; j < i; j++)
				free(arr_2d[j]);

			free(arr_2d);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr_2d[i][j] = 0;
	}

	return (arr_2d);
}
