#include "main.h"
/**
 * positive_or_negative - Entry point
 * Description: checks for positive or negative numbers
 * @i: integer to be passed
 * Return: Always 0.
 */
void positive_or_negative(int i)
{

	if (i <  0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
