#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
