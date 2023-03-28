#include "main.h"

/**
 * print_array - prints array characters
 * @a: array
 * @n: array size 
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
