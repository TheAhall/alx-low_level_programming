#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * #name: dog s name
 * @age: dog s age
 * @owner: dog s owner
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (d);
}
