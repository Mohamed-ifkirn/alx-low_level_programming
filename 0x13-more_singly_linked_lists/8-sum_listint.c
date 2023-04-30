#include "lists.h"

/**
 * sum_listint - ...
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum_listint = 0;

	if (head)
	{
	while (head)
	{
	sum_listint += head->n;
	head = head->next;
	}
	}

	return (sum_listint);
}
