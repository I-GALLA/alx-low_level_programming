#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: 1
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
