#include "main.h"

/**
 * print_most_numbers - prints 0 throught 9 without 2 or 4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		else
			_putchar(c);
	}
	_putchar('\n');
}
