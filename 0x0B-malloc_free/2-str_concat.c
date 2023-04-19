#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * Return: Null for failure or pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *newStr;
	unsigned int s1_ln, s2_ln, i, j;

	if (s1 == NULL && s2 != NULL)
		return (s2);
	else if (s1 != NULL && s2 == NULL)
		return (s1);
	else if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (s1_ln = 0; s1[s1_ln] != '\0'; s1_ln++)
		;
	for (s2_ln = 0; s2[s2_ln] != '\0'; s2_ln++)
		;

	newStr = malloc(sizeof(char) * (s1_ln + s2_ln));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < s1_ln; i++)
		newStr[i] = s1[i];
	for (j = 0; j < s2_ln; j++)
		newStr[i + j] = s2[j];
	return (newStr);
}
