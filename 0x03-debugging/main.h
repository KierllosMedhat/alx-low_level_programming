#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - Test for positive and negative numbers
 * @i: the number to be checked
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}

#endif /* MAIN_H */
