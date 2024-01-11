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

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	return (*head);
}
