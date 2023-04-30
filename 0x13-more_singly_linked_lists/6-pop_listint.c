#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint -  deletes the head node
  * @head:  a double pointe
  *
  * Return: ...
  */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n = 0;

	if (*head != NULL)
	{
	pop = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = pop;
	}

	return (n);
}
