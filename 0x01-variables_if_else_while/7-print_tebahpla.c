#include <stdio.h>
/**
 * main - Print alphbet characters
 * Return: 0 for success
 */
int main(void)
{
	char c;

	for (c = 122; c > 97; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
