#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: the head list
 * @n: new ending for the list
 * Return: the newest list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *p;
	int i;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	p = *head;
	if (p == NULL)
		*head = h;
	else
	{
		for (i = 0; p->next != NULL; i++)
			p = p->next;
		p->next = h;
	}
	return (*head);
}
