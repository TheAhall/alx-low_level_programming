#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the beginning 
 * @head: the head list
 * @n: the new list
 * Return: new head list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = *head;
	*head = h;
	return (*head);
}
