#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: the list
 * @index: the index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *p, *t;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (i = 0; h != NULL && i < index; i++)
		h = h->next;
	p = *head;
	for (i = 0; p != NULL && i < (index - 1); i++)
		p = p->next;
	t = h;
	t = t->next;
	p->next = t;
	free(h);
	return (1);
}
