#include "main.h"
#include <string.h>

/**
 * _strcpy - Funcion copies a string to other
 * @dest: variable
 * @src: variable
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
