#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 * Description: computes the absolute value of an integer.
 * @i: character to be checked.
 * Return: absolute value
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
