#include "main.h"

/**
 * print_rev - short disc.;
 *@s: string
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;
	j = len - 1;
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
