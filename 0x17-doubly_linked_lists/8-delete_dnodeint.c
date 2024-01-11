#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: the list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp1, *tmp2, *delnode;

	if (*head ==NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
		}
		else
		{
			tmp1 = *head;
			*head = (*head)->next;
			free(tmp1);
		}
	}
	else
	{
		tmp1 = *head;
		tmp2 = *head;
		for (i = 0; i < index - 1; i++)
		{
			tmp1 = tmp1->next;
			if (tmp1 == NULL)
				return (-1);
		}
		for (i = 0; i < index; i++)
		{
			tmp2 = tmp2->next;
			if (tmp2 == NULL)
			{
				delnode = tmp1;
				tmp1 = tmp1->prev;
				free(delnode);
				return (1);
			}
		}
		delnode = tmp2;
		tmp2 = tmp2->next;
		tmp1->next = tmp2;
		tmp2->prev = tmp1;
		free(delnode);
	}
	return (1);
}
