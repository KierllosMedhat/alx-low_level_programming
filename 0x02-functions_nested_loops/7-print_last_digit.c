#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: number
 * Return: last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = -i % 10;
		_putchar(48 + j);
		return (j);
	}
	else
	{
		j = i % 10;
		_putchar(48 + j);
		return (j);
	}
}
