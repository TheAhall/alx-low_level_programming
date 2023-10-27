#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest: variable 1
 * @src: variable 2
 * @n: variable 3
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
