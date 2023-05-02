#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data (n) of the listint_t linked list.
 *         If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *node = head;

    while (node)
    {
        sum += node->n;
        node = node->next;
    }

    return (sum);
}
