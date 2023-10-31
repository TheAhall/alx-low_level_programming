#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: value char
 */
char *argstostr(int ac, char **av)
{
	int i, j, l, n = 0;
	char *s;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
				s[n] = av[i][j];
			n++;
		}
		s[n++] = '\n';
	}
	s[n] = '\0';
	return (s);
}
