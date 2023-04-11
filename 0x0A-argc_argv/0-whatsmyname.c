#include "main.h"

/**
 * main - prints function name
 * @argc: args. counter
 * @argv: args vector
 * Return: 0 for succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	return (0);
}
