#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - dog structure
 * @name: dog s name
 * @age: dog s age
 * @owner: dog s owner
 * Description: this is for dogs
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
