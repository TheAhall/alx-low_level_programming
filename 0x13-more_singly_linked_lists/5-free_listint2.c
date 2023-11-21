#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *h;
	int i;

	if (head == NULL)
		return;
	for (i = 0; *head != NULL; i++)
	{
		h = *head;
		*head = (*head)->next;
		free(h);
	}
	free(*head);
}
