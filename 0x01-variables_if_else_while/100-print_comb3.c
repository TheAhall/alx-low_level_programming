#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 9; i++)
	{
		for (n = 1; n < 10; n++)
		{
			if (n > i)
			{
				putchar('0' + i);
				putchar('0' + n);
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		
		}
	}
	putchar ('\n');
	return (0);
}
