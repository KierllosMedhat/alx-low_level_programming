#include "main.h"

/**
 * puts_half - puts half
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;
	i = n;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
