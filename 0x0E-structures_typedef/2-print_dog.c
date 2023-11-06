#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: the struct to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("owner: %s\n", (*d).owner);
}
