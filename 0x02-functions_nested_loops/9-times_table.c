#include "main.h"

/**
 * times_table - starting point
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, t;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			t = i * j;
			_putchar('0' + t);
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
		
	}
}
