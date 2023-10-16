#include "main.h"

/**
 * swap_int - function to swap values
 * @a: variable to swap with other
 * @b: variable to swap with other
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = 0;

	i = *a;
	*a = *b;
	*b = i;
}
