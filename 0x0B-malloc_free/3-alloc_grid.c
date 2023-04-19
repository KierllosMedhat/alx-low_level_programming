#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create a 2 dim. array
 * @width: int
 * @height: int
 * Return: pointer to array or null
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * (width * height));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i <= width * length; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
