#include "main.h"

/**
 * _islower - Entery point
 *
 * Return: 0
 */
int _islower(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		i = 1;
	else
		i = 0;
	return (i);
}
