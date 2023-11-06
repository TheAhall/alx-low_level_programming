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
	int i, j, ln = 0, lo = 0;

	for (i = 0; name[i] != '\0'; i++)
		ln++;
	for (i  = 0; owner[i] != '\0'; i++)
		lo++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = malloc(sizeof(char) * (ln + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < ln; i++)
		(*d).name[i] = name[i];
	(*d).name[i] = '\0';
	(*d).age = age;
	(*d).owner = malloc (sizeof(char) * (lo + 1));
	if ((*d).owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (j = 0; j < lo; j++)
		(*d).owner[j] = owner[j];
	(*d).owner[j] = '\0';
	return (d);
}
