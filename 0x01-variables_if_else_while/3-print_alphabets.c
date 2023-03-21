#include <stdio.h>
#include <string.h>
/**
 * main - PRINT alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[54] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53; i++)
	{
		putchar(alphabet[i]);
	}
	return (0);
}
