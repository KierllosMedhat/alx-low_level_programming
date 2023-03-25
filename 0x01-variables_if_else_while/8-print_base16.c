#include <stdio.h>
/**
 * main - Print alphbet characters
 * Return: 0 for success
 */
int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
