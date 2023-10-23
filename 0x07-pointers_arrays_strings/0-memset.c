#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: the arrayr
 * @b: variable char
 * @n: array s size
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
