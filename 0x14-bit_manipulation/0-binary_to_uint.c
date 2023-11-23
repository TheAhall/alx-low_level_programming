#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
			n = n * 2 + (b[i] - '0');
		else
			return (0);
	}
	return (n);
}
