#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: var 1
 * @needle: var 2
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;

	a = strstr(haystack, needle);
	return (a);
}
