#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: variable should be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
