#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum size
 * @max: maximum size
 * Return: value int
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min;
	a = malloc(sizeof(int) * (l + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}
