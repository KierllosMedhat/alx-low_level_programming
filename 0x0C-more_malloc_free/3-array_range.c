#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: ending value
 * Return: Pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int size, i;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
