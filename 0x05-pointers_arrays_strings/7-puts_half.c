#include "main.h"
#include <string.h>

/**
 * puts_half - Function of printing half of string
 * @str: variable should be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i, n = strlen(str) - 1;

	for (i = 0; i <= n; i++)
	{
		if (i > n / 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}
