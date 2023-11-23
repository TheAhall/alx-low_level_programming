#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the given index
 * Retun: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned int num;

	if (index >= size)
		return (-1);
	num = n >> index & 1;
	return (num);
}
