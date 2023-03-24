#include <stdio.h>
#include "main.h"


/**
 * _isupper - checks for upper case letters
 * @c: the letter to be checked
 * Return: 1 for uppercase and 0 for lower case
 */
int _isupper(char c)
{
	if (c < 91)
		return (1);
	else
		return (0);
}
