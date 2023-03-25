#include "main.h"
/**
 * print_last_digit - print last digit
 * @i: number
 * Return: last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		_putchar(48 + (-i) % 10);
		return (48 + (-i) % 10);
	}
	else
	{
		_putchar(48 + i % 10);
		return (48 + i % 10);
	}
}
