#include "main.h"
#include <stdio.h>

/**
 * print_times_table - starting point
 *@n: variable
 * Return: Always 0
 */
void print_times_table(int n)
{
	int i, j, t;

	if (n == 0)
		printf("0\n");
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			t = i * j;
			if (n > 0 && n < 15)
			{
				if (j == 0)
					printf("%d, ", t);
				else
				{
					if (j != n)
						printf("%3d, ", t);
					else
						printf("%3d\n", t);
				}
			}
		}
	}
}