#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two nums
 * @argc: number of args
 * @argv: array of args
 * Return: 1 for error and 0 for succes
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);

}
