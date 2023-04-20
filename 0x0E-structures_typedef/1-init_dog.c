#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 *
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to a character string for the name of the dog
 * @age: Float representing the age of the dog
 * @owner: Pointer to a character string for the owner of the dog
 *
 * Description: This function initializes a variable of type struct dog with the
 * specified values for the dog's name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

