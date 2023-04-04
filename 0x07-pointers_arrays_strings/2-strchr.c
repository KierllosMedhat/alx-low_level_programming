#include "main.h"


/**
 * _strchar - locates a character
 * @s: string
 * @c: the char we r looking for
 * Return: pointer to char or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
