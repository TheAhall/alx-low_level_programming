#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function for digit
 * @c: should ne checked
 * Return: variable
 */
int _isdigit(int c)
{
	int i;

	if (isdigit(c))
		i = 1;
	else
		i = 0;
	return (i);
}
