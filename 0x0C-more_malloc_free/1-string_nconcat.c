#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatStr;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
	concatStr = malloc(sizeof(char) * (len + 1));
	if (concatStr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concatStr[i] = s1[i];
	for (i = 0; i < n && s2[i]; i++)
		concatStr[i] = s2[i - len];
	concatStr[len] = '\0';
	return (concatStr);
}
