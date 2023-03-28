#include "main.h"

/**
 * reset_to_98 - reset var to 98
 * @n: variable to be changed
 */

void reset_to_98(int *n)
{
	int *address;

	address = n;
	*address = 98;
}
