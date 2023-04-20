#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated to dog_t struct
 *
 * @d: Pointer to dog_t struct to be freed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
