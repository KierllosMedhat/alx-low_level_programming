#include "main.h"

/**
 * _isdigit - determines if c is a digit
 * @c: the letter to be tested
 * Return: 1 for digit and 0 else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
