#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number.
 * @n: character to be checked.
 * Return: the value of the last digit.
 */
int print_last_digit(n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
