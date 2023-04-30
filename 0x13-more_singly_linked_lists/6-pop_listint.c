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
	listint_t *new;
	int n;

	if (*new != NULL)
	{
		new = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new;
	}

	return (n);
}
