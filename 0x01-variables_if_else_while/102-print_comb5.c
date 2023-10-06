#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n, a, b;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 9; n++)
		{
			for (a = 0; a < 9; a++)
			{
				for (b = 1; b < 10; b++)
				{
					if (b > n && a >= i && a <= b)
					{
						putchar('0' + i);
						putchar('0' + n);
						putchar(' ');
						putchar('0' + a);
						putchar('0' + b);
						if (n != 8)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
