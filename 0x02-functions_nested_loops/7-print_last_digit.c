#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: number
 * Return: last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0 && i > -2147483648)
	{
		j = -i % 10;
		_putchar(48 + j);
		return (j);
	}
	else if (i == -2147483648)
	{
		 _putchar('8');
		 return (8);
	}
	else
	{
		j = i % 10;
		_putchar(48 + j);
		return (j);
	}
}
