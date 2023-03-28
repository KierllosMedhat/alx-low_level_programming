#include "main.h"

/**
 * rev_string - desc
 * @s: string
 */
void rev_string(char *s)
{
	int i, j, len;
	char *rev;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;
	j = len - 1;
	i = 0;
	*rev = *s;
	while (j != i)
	{
		*(rev + j) = *(s + i);
		*(rev + i) = *(s + j);
		j--;
		i++;
	}
}
