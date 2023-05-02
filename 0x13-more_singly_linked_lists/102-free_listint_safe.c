#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the pointer to the head node
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		size++;
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	return (size);
}
