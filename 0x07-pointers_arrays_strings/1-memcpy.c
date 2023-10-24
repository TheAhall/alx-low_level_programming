#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: var 1
 * @src: var 2
 * @n: the size
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
