#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to sum
 *
 * Return: sum of all parameters
 */
 
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int sum = 0;
    unsigned int i;

    va_start(args, n);
    i = n;
    while (i--)
        sum += va_arg(args, int);
    va_end(args);

    return sum;
}
