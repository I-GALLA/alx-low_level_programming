#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely
 * @head: Head of the list
 *
 * Return: The number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head, *prev = NULL, *next = NULL;

    if (!head)
        exit(98);

    while (current)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;
        next = current->next;
        if (prev && prev > current)
        {
            printf("-> [%p] %d\n", (void *)next, next->n);
            break;
        }
        prev = current;
        current = next;
    }

    return (count);
}
