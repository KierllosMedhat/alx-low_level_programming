#include "main.h"

int _sqrt_recursion_hlp_fun(int n, int i);

/**
 * _sqrt_recursion - calculate sqrt
 * @n: number
 * Return: integer for sqrt or -1 for error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_hlp_fun(n, 0));
}

/**
 * _sqrt_recursion_hlp_fun - helper function
 * @n: number
 * @i: iterator
 * Return: integer for sqrt or -1 for error
 */

int _sqrt_recursion_hlp_fun(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_hlp_fun(n, i + 1));
}
