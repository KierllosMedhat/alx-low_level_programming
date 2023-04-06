#include "main.h"

int is_prime_number_hlp_fun(int n, int i);

/**
 * is_prime_number - determine whether a number is prime
 * @n: number to evaluate
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_hlp_fun(n, n - 1));
}

/**
 * is_prime_number_hlp_fun - helper function
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if prime or 0 if not
 */

int is_prime_number_hlp_fun(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_number_hlp_fun(n, i - 1));
}
