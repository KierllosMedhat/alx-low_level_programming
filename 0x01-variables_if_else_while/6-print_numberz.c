#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
