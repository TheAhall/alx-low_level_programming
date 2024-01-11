#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: the list
 * @n: number should be added
 * Return: the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (head == NULL)
		*head = node;
	node->next = *head;
	*head = node;
	return (*head);
}
