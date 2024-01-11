#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: the list
 * @n: the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		node->prev = NULL;
	}
	else if ((*head)->next == NULL)
	{
		(*head)->next = node;
		node->prev = *head;
	}
	else
	{
		tmp = (*head)->next;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		node->prev = tmp;
	}
	return (*head);
}
