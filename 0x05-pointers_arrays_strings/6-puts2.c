#include "main.h"
#include <string.h>

/**
 * puts2 - Function prints
 * @str: Variable should be printed
 * Return: void;
 */
void puts2(char *str)
{
	int i, j = strlen(str) - 1;

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
