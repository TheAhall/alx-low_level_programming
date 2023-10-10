#include "main.h"
#include <stdio.h>

/**
 * times_table - starting point
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = i * j;
			if (j == 0)
				printf("%d, ", t);
			else
			{
				if (j != 9)
					printf("%2d, ", t);
				else
					printf("%2d\n", t);
			}
		}
	}
}
