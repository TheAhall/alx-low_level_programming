#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number should be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size, lead = 1;
	int bit, i;

	size = sizeof(int) * 8;
	for (i = size - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit || !lead)
		{
			_putchar('0' + bit);
			lead = 0;
		}
	}
	if (lead)
		_putchar('0');

}
