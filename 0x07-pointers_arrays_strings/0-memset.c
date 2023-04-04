#include "main.h"

/**
 * _memset - filles memory with constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: size of area
 * Return: pointer to the memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i++; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
