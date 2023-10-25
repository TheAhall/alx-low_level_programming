#include "main.h"
#include <stdio.h>

int find_sqrt_recursive(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: variable shoulde find its square root
 * Return: square value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursive(n, 1));
}

/**
 * find_sqrt_recursive - function to find sqrt
 * @n: variable 1
 * @i: variable 2
 * Return: value of sqrt
 */
int find_sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt_recursive(n, i + 1));
}
