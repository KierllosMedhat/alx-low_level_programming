#include "main.h"

/**
 * print_rev;
 *@s: string
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	
	len = i;
	j = len - 1;
	while (j >= 0)
	{
		_putchar(*(str + j));
		j--;
	}
}
