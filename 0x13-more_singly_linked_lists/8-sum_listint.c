#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * @head: the list
 * Return: value of sum
 */
int sum_listint(listint_t *head)
{
	listint_t *h;
	int i, sum = 0;

	h = head;
	for (i = 0; h != NULL; i++)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
