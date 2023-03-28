#include "main.h"

/**
 * _puts2 - print string
 * @str: string
 */
void _puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
