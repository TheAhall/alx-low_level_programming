#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: list should be freed
 * Return: void
 */
void free_list(list_t *head)
{
	int i;
	list_t *h;

	for (i = 0; head != NULL; i++)
	{
		h = head;
		free(h->str);
		head = head->next;
		free(h);
	}
	free(head);
}
