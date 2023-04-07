#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to check
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: String to check
 * @start: Starting index
 * @end: Ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, 0, len - 1));
}
