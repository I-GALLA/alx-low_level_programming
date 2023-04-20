#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character from a va_list
 * @ap: The va_list containing the character
 */
void print_char(va_list ap)
{
    printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer from a va_list
 * @ap: The va_list containing the integer
 */
void print_int(va_list ap)
{
    printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float from a va_list
 * @ap: The va_list containing the float
 */
void print_float(va_list ap)
{
    printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string from a va_list
 * @ap: The va_list containing the string
 */
void print_string(va_list ap)
{
    char *str = va_arg(ap, char *);

    if (str == NULL)
        str = "(nil)";

    printf("%s", str);
}

/**
 * struct print_fmt - Struct print_fmt
 *
 * @fmt: The format specifier
 * @f: The function pointer to the corresponding function to print the type
 */
typedef struct print_fmt
{
    char fmt;
    void (*f)(va_list);
} fmt_t;

/**
 * print_all - Prints anything, followed by a new line
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    unsigned int i = 0, j = 0;
    va_list ap;
    char *sep = "";

    fmt_t print_fmt[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {0, NULL}
    };

    va_start(ap, format);

    while (format && format[i])
    {
        j = 0;
        while (print_fmt[j].fmt)
        {
            if (print_fmt[j].fmt == format[i])
            {
                printf("%s", sep);
                print_fmt[j].f(ap);
                sep = ", ";
            }
            j++;
        }
        i++;
    }

    printf("\n");
    va_end(ap);
}

