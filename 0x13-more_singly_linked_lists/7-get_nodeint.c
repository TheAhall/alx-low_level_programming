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

	h = head;
	for (i = 0; h != NULL && i < index; i++)
		h = h->next;
	if (h == NULL)
		return (NULL);
	else
		return (h);
}
