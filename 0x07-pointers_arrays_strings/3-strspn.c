#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: var 1
 * @accept: var 2
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = strspn(s, accept);
	return (i);
}
