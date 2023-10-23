#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: var 1
 * @accept: var 2
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = strpbrk(s, accept);
	return (a);
}
