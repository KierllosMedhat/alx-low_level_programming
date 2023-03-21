#include <stdio.h>
#include <string.h>
/**
 * main - PRINT alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz\n";

	for (int i = 0; i < 27; i++)
	{
		putchar(alphabet[i]);
	}
	return (0);
}
