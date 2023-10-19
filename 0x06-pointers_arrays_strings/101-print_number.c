#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: variable should be printed
 * Return void
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
		print_number(i / 10);
	_putchar('0' + i % 10);
}
