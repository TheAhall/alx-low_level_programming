#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the list
 * @idx: the position
 * @n: the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *p;
	unsigned int i;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	h = *head;
	for (i = 0; h != NULL && i < (idx - 1); i++)
		h = h->next;
	if (h == NULL)
	{
		free(p);
		return (NULL);
	}
	p->next = h->next;
	h->next = p;
	return (p);
}
