#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *h;
	int i;

	for  (i = 0; head != NULL; i++)
	{
		h = head;
		head = head->next;
		free(h);
	}
	free(head);
}
