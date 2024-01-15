#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: var 1
 * @c: var 2
 * Return: value
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
