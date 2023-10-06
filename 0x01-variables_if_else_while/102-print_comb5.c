#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i <= 98; i++)
	{
		for (n = i + 1; n <= 99; n++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));
			if (i == 98 && n == 99)
			{
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
