#include "main.h"
#include <stdlib.h>

/**
 * wordleng - calculat the length f word
 * @str: the string
 * Return: value of length
 */
int wordleng(char *str)
{
	int i = 0, leng = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		leng++;
		i++;
	}
	return (leng);
}

/**
 * wordscount - function that count the number of words
 * @str: the string
 * Return: value of number counted
 */
int wordscount(char *str)
{
	int i = 0, leng = 0;
	int words = 0;

	for (i = 0; *(str + i); i++)
		leng++;
	for (i = 0; i < leng; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i = i + wordleng(str + i);
		}
	}
	return (words);
}

/**
 * strtow - function that splits a string into words
 * @str: string should be splited
 * Return: string splited
 */
char **strtow(char *str)
{
	int i, j, l = 0, n;
	int words;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = wordscount(str);
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		while (str[l] == ' ')
			l++;
		n = wordleng(str + l);
		s[i] = malloc(sizeof(char) * (n + 1));
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < n; j++)
			s[i][j] = str[l++];
		s[i][j] = '\0';
	}
	s[i] = NULL;
	return (s);
}
