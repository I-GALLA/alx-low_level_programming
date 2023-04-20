#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 *
 * @name: Pointer to a character string for the name of the dog.
 * @age: Float representing the age of the dog.
 * @owner: Pointer to a character string for the owner of the dog.
 *
 * Description: This structure represents a dog, with a name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);;

#endif /* DOG_H */