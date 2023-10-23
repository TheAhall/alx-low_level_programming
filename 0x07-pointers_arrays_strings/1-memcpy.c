#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: var 1
 * @src: var 2
 * @n: the size
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
