#include "main.h"
#include <stdio.h>

int find_prime_number(int n, int i);

/**
 * is_prime_number - function that detect prime numbers
 * @n: variab;e should be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (find_prime_number(n, n - 1));
}

/**
 * find_prime_number - function to find i
 * @n: variable 1
 * @i: variable 2
 * Return: 0 or 1
 */
int find_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (find_prime_number(n, i - 1));
}
