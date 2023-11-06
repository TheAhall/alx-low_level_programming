#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: the struct to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((d->name) != NULL && (d->age) != 0 && (d->owner) !=NULL)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Name: (nil)");
			printf("Age: 0");
			printf("Owner: (nil)");
		}
	}
}
