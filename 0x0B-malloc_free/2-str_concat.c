#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: value char
 */
char *str_concat(char *s1, char *s2)
{
	size_t j, k;
	char *s;
	int i, a;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	j = strlen(s1);
	k = strlen(s2);
	a = j + k;
	s = malloc(sizeof(char) * a + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		s[i + j] = s2[i];
	return (s);
}
