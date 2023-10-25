#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int comparator(char *s, int i, int j);

/**
 * is_palindrome - function that a stringis a palindrome
 * @s: var shuld be checked
 * Return: value
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * comparator - compares characters of string
 * @s: the string
 * @i: var 1
 * @j: var 2
 * Return: value
 */
int comparator(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + comparator(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * _strlen_recursion - calculat the length
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
