#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the list:
 * @idx: the position
 * @n: the node
 * Return: the new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp1, *tmp2, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp1 = *h;
	tmp2 = *h;
	for (i = 0; i < idx - 1; i++)
	{
		tmp1 = tmp1->next;
		if (tmp1 == NULL)
			return (NULL);
	}
	for (i = 0; i <= idx - 1; i++)
	{
		tmp2 = tmp2->next;
		if (tmp2 == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
	}
	tmp1->next = new;
	new->prev = tmp1;
	new->next = tmp2;
	tmp2->prev = new;
	return (*h);
}
