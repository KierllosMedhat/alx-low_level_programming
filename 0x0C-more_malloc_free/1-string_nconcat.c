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
	int i, len = n;

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
	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		concatStr[len++] = s1[i];
	for (i = 0; i < (int) n && s2[i]; i++)
	{
		concatStr[len] = s2[i];
		len++;
	}
	concatStr[len] = '\0';
	return (concatStr);
}
