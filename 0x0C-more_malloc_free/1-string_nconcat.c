#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2 should be printed
 * Return: value char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = 0, l2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	for (i = 0; s2[i] != '\0'; i++)
		l2++;
	s = malloc(sizeof(char) * (l1 + n) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (l2 > n)
	{
		for (i = 0; i < n; i++)
			s[i + l1] = s2[i];
		s[l1 + i] = '\0';
	}
	else if (l2 <= n)
	{
		for (i = 0; s2[i] != '\0'; i++)
			s[i + l1] = s2[i];
		s[l1 + i] = '\0';
	}
	return (s);
}
