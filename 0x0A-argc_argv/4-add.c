#include <stdio.h>
#include <stdlib.h>


/**
 * main - add function
 * @argc: count
 * @argv: array of ints
 * Return: 0 for success or 1 for error
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);

}
