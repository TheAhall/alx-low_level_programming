#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates tow strings
 * @dest: variable 1
 * @src: variable 2
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	strcat (dest, src);
	return (dest);
}
