#include <stdio.h>

/**
 * main - print number of args
 * @argc: number of args
 * @argv: array of args
 * Return: 0 for succes
 */
int main(int argc, char  __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
