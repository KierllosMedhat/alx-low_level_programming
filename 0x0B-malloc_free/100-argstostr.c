#include <stdlib.h>
#include "main.h"

/**
 * argstostr - arguments to strings
 * @ac: args count
 * @av: args vector
 * Return: NULL for failure or pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, strLength = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
			strLength++;
		strLength++;
	}

	string = malloc((strLength + 1) * sizeof(char));
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	for (i = k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}
		string[k] = '\n';
		k++;
	}
	return (string);

}
