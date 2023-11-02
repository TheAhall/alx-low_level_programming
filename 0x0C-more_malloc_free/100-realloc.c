#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: the string
 * @old_size: the old size the the string
 * @new_size: the new size of the string
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		a[i] = ((char *)ptr)[i];
	free(ptr);
	return (a);
}
