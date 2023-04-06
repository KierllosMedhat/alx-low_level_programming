#include "main.h"

int calc_length(char *s);
int is_palindrome_hlp(char *s, int iterator, int length);

/**
 * is_palindrome - determine wheather a string is a palindrome
 * @s : string
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int length = calc_length(s);

	if (length == 0)
		return (1);
	if (length == 1)
		return (1);
	return (is_palindrome_hlp(s, length, length));
}

/**
 * calc_length - calculate string length
 * @s: string
 * Return: string length
 */
int calc_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + calc_length(s + 1));
}

/**
 * is_palindrome_hlp - helper function
 * @s: string
 * @i: iterator
 * @length: string length
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome_hlp(char *s, int i, int length)
{
	if (length == 2)
	{
		if (s[0] == s[1])
			return (1);
		return (0);
	}
	return (is_palindrome_hlp(s + 1, i - 1, length - 2));
}
