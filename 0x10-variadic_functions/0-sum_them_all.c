#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variable
 * Return: value of he sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value, sum = 0;

	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(num, int);
		sum += value;
	}
	va_end(num);
	return (sum);
}
