#include "main.h"

/**
 * print_triangle - Function entery point
 * @size: variable
 * Return: value
 */
void print_triangle(int size)
{
	int i, j, n;

	for (i = 1; i <= size; i++)
	{
		n = size - i;
		for (j = 0; j < size; j++)
		{
			if (j < n)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
