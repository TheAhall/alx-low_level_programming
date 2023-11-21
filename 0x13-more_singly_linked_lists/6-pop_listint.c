#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: the list
 * Return: value of deleted n
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int i;

	if (head == NULL)
		return (0);
	h = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(h);
	return (i);
}
