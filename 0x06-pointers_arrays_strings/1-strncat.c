#include "main.h"
#include <string.h>

/**
 * _strncat - Function that concatenates two strings.
 * @dest: variable 1
 * @src: variable 2
 * @n: variable 3
 * return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
