#include "main.h"

/**
 * _islower - test for lowercase
 * @c: character to be tested
 * Return: 1 for lower 0 for upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
