#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 *
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *new_name, *new_owner;
    int name_len = 0, owner_len = 0, i;

    while (name[name_len] != '\0')
        name_len++;

    while (owner[owner_len] != '\0')
        owner_len++;

    new_name = malloc(sizeof(char) * (name_len + 1));
    new_owner = malloc(sizeof(char) * (owner_len + 1));

    if (new_name == NULL || new_owner == NULL)
    {
        free(new_name);
        free(new_owner);
        return (NULL);
    }

    for (i = 0; i <= name_len; i++)
        new_name[i] = name[i];

    for (i = 0; i <= owner_len; i++)
        new_owner[i] = owner[i];

    new_dog = malloc(sizeof(dog_t));

    if (new_dog == NULL)
    {
        free(new_name);
        free(new_owner);
        return (NULL);
    }

    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return (new_dog);
}
