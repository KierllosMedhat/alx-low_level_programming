#include <stdlib.io>
#include "main.h"

/**
 * _strdup - creates a duplicate string
 * @str: string
 * Return: Null or pointer to string
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(str));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}
