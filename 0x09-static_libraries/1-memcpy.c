#include "main.h"

/**
 * _memcpy - copies bytes
 * @dest: copying destination
 * @src: source location
 * @n: number of bytes
 * Return: pointer to the destenation
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
