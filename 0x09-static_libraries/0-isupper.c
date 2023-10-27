#include "main.h"

/**
 * _isupper - function for upper/lowercase
 * @c: should be seen if upper or lowercase
 * Return: value of i=1 or 0
 */
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		i = 1;
	else
		i = 0;
	return (i);
}
