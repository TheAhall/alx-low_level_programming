#include "main.h"

/**
 * _islower - Entery point
 *@c: Should be checked
 * Return: 1 or 0
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
