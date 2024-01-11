#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		tmp->next = NULL;
		head->prev = NULL;
		free(tmp);
	}
	free(head);
}
