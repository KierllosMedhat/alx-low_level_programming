#include "main.h"
#include "_putchar.c"
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
		_putchar(argv[argc - 1][i]);
	}
	return (0);
}
