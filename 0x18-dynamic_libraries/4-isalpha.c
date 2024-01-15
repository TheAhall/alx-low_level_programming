#include "main.h"

/**
 * _isalpha - Entery point
 *@c: Should be checked
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		i = 1;
	else
	{
		if (c >= 'A' && c <= 'Z')
			i = 1;
		else
			i = 0;
	}
	return (i);
}
