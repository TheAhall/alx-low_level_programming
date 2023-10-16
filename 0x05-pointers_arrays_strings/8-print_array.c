#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to print n element
 * @a: array name
 * @n: array s length
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, j = n - 1;
	for (i = 0; i <= j; i++)
	{
		printf("%d",a[i]);
		if (i != j)
		{
			printf(", ");
		}
	}
	printf("\n");
}
