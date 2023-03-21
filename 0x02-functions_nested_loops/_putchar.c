#include <unistd.h>
/**
 * main - Entry point
 * Description: writes the character a to stdout
 * Return: 1
 */
int _putchar(char a)
{
    return (write(1, &a, 1));
}
