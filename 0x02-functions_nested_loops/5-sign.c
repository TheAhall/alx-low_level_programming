#include "main.h"

/**
 * print_sign - start point
 * @n: Should be checked
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		if (n > 0)
		{
			_putchar('+');
			i = 1;
		}
		else
		{
			_putchar('-');
			i = -1;
		}
	}
	return (i);
}