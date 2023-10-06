#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int c, i, n;

	for (c = 0; c < 8; c++)
	{
		for (i = 1; i < 10; i++)
		{
			for (n = 2; n < 10; n++)
			{
				if (i < n && c < i)
				{
					putchar('0' + c);
					putchar('0' + i);
					putchar('0' + n);
					if (c != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
