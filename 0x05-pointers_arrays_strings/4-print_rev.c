#include "main.h"
#include <string.h>

/**
 * print_rev - Function to print srting in reverse 
 * @s: Variable to be printed in reverse
 * Return: value
 */
void print_rev(char *s)
{
	int i;
	int j = strlen(s) - 1;

	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
