#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the linked list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (head == NULL || str == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
