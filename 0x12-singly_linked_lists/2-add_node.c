#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * @head: the list head
 * @str: the string
 *
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	unsigned int i;
	size_t l = 0;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		l++;
	h->str = strdup(str);
	h->len = l;
	h->next = *head;
	*head = h;
	return (*head);
}
