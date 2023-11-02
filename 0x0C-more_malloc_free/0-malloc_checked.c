#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
