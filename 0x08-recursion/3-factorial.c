#include "main.h"

/**
 * factorial - I think the name says it all !!
 * @n: number
 * Return: integer or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
