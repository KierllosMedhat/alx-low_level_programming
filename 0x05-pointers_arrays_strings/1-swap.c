#include "main.h"

/**
 * swap_int - swap two integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int *p1, *p2, *p3, temp;

	temp = 0;
	p1 = a;
	p2 = b;
	p3 = &temp;

	*p3 = *p1;
	*p1 = *p2;
	*p2 = *p3;
}
