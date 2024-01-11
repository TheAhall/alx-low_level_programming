#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node
 * @head: the list
 * @index: the index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = head;
	for (i = 0; i < index; i++)
		tmp = tmp->next;
	return (tmp);
}
