#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: the number
 * @m: the other number
 * Return: fpiled bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int i = 0;

	while (num)
	{
		if (num & 1ul)
			i++;
		num = num >> 1;
	}
	return (i);
}
