#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of allocated memory
 * Return: Pointer or 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer != NULL)
		return (pointer);
	exit(98);
}
