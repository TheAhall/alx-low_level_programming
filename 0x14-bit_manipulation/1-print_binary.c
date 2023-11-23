#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number should be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size;
	int  i = 0;

	size = sizeof(n) * 8;
	while (size)
	{
		if (n & 1L << --size)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar ('0');
	}
	if (!i)
		_putchar('0');

}
