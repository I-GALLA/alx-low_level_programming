#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the first 100 terms
 * of the Fibonacci sequence.
 * Return: Always 0.
 */
int main(void)
{
        int i;
        long int t1 = 0, t2 = 1, nextTerm;

        for (i = 0; i < 100; i++)
        {
                printf("%ld", t1);
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
                if (i == 99)
                        printf("\n");
                else
                        printf(", ");
        }

        return (0);
}
