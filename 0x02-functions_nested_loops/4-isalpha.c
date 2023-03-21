#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: checks for lowercase character.
 * @c: character to be checked.
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
