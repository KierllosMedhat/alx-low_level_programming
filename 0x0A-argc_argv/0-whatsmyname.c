#include "main.h"
#include "stdio.h"
/**
 * main - prints function name
 * @argc: args. counter
 * @argv: args vector
 * Return: 0 for succes
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n",argv[0]);
	return (0);
}
