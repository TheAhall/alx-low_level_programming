#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function duplicat string
 * @str: the string should be duplicated
 * Return: string
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	j = strlen(str);
	s = malloc(j + 1);
	if (s == NULL)
	        return (NULL);
	for (i = 0; i < j; i++)
		s[i] = str[i];
	return (s);

}
