#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the list
 * @index: the nmber
 * Return: index number
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	h = head;
	for (i = 0; i < index; i++)
		h = h->next;
	return (h);
}
