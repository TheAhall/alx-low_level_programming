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
	int i, j = strlen(str);

	if (str == NULL)
		return (NULL);
	s = malloc(j);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
	        return (NULL);
	}
	for (i = 0; i < j; i++)
		s[i] = str[i];
	return (s);

}
