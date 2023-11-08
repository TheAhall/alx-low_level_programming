#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: the string
 * @size: string s len
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
