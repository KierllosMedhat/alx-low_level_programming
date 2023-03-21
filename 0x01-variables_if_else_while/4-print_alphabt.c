#include <stdio.h>
#include <string.h>
/**
 * main - PRINT alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[27] = "abcdfghijklmnoprstuvwxyz\n";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar(alphabet[i]);
	}
	return (0);
}
