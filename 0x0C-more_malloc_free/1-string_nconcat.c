#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, j;

	if (n == NULL)
		n = 0;

	concat = malloc(sizeof(s1) + n);
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= n)
	{
		concat[i + j] = s2[j];
		j++;
	}
	return (concat);
}
