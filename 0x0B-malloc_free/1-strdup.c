#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a duplicate string
 * @str: string
 * Return: Null or pointer to string
 */

char *_strdup(char *str)
{
	char *dup_str;
	long unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++);

	dup_str = malloc(i * sizeof(char) + 1);
	if (dup_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		dup_str[j] = str[j];
	}

	return (dup_str);
}
