#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - print a number
 * @i : integer
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative,followed by a new line
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
}
