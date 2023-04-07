#include "main.h"

/**
 * _sqrt_recursive - Finds the natural square root of a number.
 * @n: Number to calculate its square root.
 * @root: Root to check.
 *
 * Return: The natural square root of `n`, or -1 if it does not exist.
 */
int _sqrt_recursive(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	return (_sqrt_recursive(n, root + 1));
}

/**
 * _sqrt_recursion - Finds the natural square root of a number.
 * @n: Number to calculate its square root.
 *
 * Return: The natural square root of `n`, or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursive(n, 0));
}
