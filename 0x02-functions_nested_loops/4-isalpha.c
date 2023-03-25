#include "main.h"

/**
 * _isalpha - test if c is a letter
 * @c: the letter to be tested
 * Return: 1 for letter and 0 for else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
