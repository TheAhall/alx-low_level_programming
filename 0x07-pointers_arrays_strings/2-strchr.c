#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: var 1
 * @C: var 2
 * Return: value
 */
char *_strchr(char *s, char c)
{
	char *a;

	a = strchr(s, c);
	return (a);
}
