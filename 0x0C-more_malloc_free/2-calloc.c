#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: Number of elements to be allocated
 * @size: Size of each element in bytes
 * Return: void;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (s);
}
