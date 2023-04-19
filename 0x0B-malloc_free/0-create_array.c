#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create and initialise array with malloc
 * @size: size of array
 * @c: character
 * Return: NULL for size 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *c_array;

	if (size <= 0)
		return (NULL);

	c_array = malloc(sizeof(char) * size);
	if (c_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		c_array[i] = c;
	}
	return (c_array);
}
