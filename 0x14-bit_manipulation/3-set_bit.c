#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned int num;

	if (index >= size)
		return (-1);
	num = *n |= 1L << index;
	return (!!num);
}
