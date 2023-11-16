#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: the list
 * @str: a string
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *p;
	unsigned int i;
	size_t l = 0;

	p = malloc(sizeof(list_t));
	h = malloc(sizeof(list_t));
	if (h == NULL || p == NULL)
		return (NULL);
	p->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		l++;
	p->len = l;
	p->next = NULL;
	h = *head;
	if (h == NULL)
		*head = p;
	else
	{
		for (i = 0; h->next != NULL; i++)
			h = h->next;
		h->next = p;
	}
	return (*head);
}
