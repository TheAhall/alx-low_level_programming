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
		printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
		printf("Age: %f\n", (*d).age ? (*d).age : "(nil)");
		printf("owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
	}
}
