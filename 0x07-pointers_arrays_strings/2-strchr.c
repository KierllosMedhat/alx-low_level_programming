#include "main.h"


/**
 * _strchr - locates a character
 * @s: string
 * @c: the char we r looking for
 * Return: pointer to char or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (;s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
